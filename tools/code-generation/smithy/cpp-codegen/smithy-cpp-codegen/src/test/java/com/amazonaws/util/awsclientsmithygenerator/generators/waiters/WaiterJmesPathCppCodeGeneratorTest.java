/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.waiters;

import org.junit.jupiter.api.Nested;
import org.junit.jupiter.api.Test;
import org.junit.jupiter.params.ParameterizedTest;
import org.junit.jupiter.params.provider.CsvSource;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.shapes.OperationShape;
import software.amazon.smithy.model.shapes.EnumShape;
import software.amazon.smithy.model.shapes.StructureShape;
import software.amazon.smithy.model.shapes.ListShape;
import software.amazon.smithy.model.shapes.ShapeId;
import software.amazon.smithy.model.shapes.MapShape;
import software.amazon.smithy.waiters.PathComparator;

import java.util.Set;

import static org.junit.jupiter.api.Assertions.*;

class WaiterJmesPathCppCodeGeneratorTest {

    private final String OUTCOME = "Model::TestOutcome";

    private String gen(String jmesPath, PathComparator comparator) {
        return WaiterJmesPathCppCodeGenerator.generate(jmesPath, comparator, OUTCOME, null, null, "testService").getCode();
    }

    // ── Full code generation tests (no model) ────────────────────────────

    @Nested
    class GenerateTests {

        @Test
        void lambdaHasCorrectSignature() {
            String code = gen("Items[].Status", PathComparator.ALL_STRING_EQUALS);
            assertTrue(code.startsWith("[](const " + OUTCOME + "& outcome, const Aws::Utils::ExpectedValue& expected) {"));
            assertTrue(code.endsWith("}"));
        }

        @Test
        void lambdaChecksSuccess() {
            assertContains(gen("Items[].Status", PathComparator.ALL_STRING_EQUALS),
                "if (!outcome.IsSuccess()) return false;");
        }

        @Test
        void lambdaGetsResult() {
            assertContains(gen("Items[].Status", PathComparator.ALL_STRING_EQUALS),
                "const auto& result = outcome.GetResult();");
        }

        @Test
        void allStringEquals_singleProjection() {
            String code = gen("BundleTasks[].State", PathComparator.ALL_STRING_EQUALS);
            assertContains(code, "std::all_of(result.GetBundleTasks().begin(), result.GetBundleTasks().end(),");
            assertContains(code, "item.GetState() == expected.get<Aws::String>()");
        }

        @Test
        void allStringEquals_projectionWithNestedFields() {
            String code = gen("ImportSnapshotTasks[].SnapshotTaskDetail.Status", PathComparator.ALL_STRING_EQUALS);
            assertContains(code, "std::all_of(result.GetImportSnapshotTasks().begin()");
            assertContains(code, "item.GetSnapshotTaskDetail().GetStatus() == expected.get<Aws::String>()");
        }

        @Test
        void allStringEquals_nestedFieldBeforeProjection() {
            String code = gen("Certificate.DomainValidationOptions[].ValidationStatus", PathComparator.ALL_STRING_EQUALS);
            assertContains(code, "std::all_of(result.GetCertificate().GetDomainValidationOptions().begin()");
            assertContains(code, "item.GetValidationStatus() == expected.get<Aws::String>()");
        }

        @Test
        void allStringEquals_nestedProjection() {
            String code = gen("Reservations[].Instances[].State.Name", PathComparator.ALL_STRING_EQUALS);
            assertContains(code, "std::all_of(result.GetReservations().begin(), result.GetReservations().end(),");
            assertContains(code, "std::all_of(item0.GetInstances().begin(), item0.GetInstances().end(),");
            assertContains(code, "item1.GetState().GetName() == expected.get<Aws::String>()");
        }

        @Test
        void anyStringEquals_singleProjection() {
            String code = gen("BundleTasks[].State", PathComparator.ANY_STRING_EQUALS);
            assertContains(code, "std::any_of(result.GetBundleTasks().begin(), result.GetBundleTasks().end(),");
        }

        @Test
        void stringEquals_directField() {
            assertContains(gen("Status", PathComparator.STRING_EQUALS),
                "return result.GetStatus() == expected.get<Aws::String>();");
        }

        @Test
        void stringEquals_nestedField() {
            assertContains(gen("Cluster.Status", PathComparator.STRING_EQUALS),
                "return result.GetCluster().GetStatus() == expected.get<Aws::String>();");
        }

        @Test
        void stringEquals_deeplyNestedField() {
            assertContains(gen("Cluster.Config.Status", PathComparator.STRING_EQUALS),
                "return result.GetCluster().GetConfig().GetStatus() == expected.get<Aws::String>();");
        }

        @Test
        void booleanEquals_directField() {
            assertContains(gen("Enabled", PathComparator.BOOLEAN_EQUALS),
                "return result.GetEnabled() == expected.get<bool>();");
        }

        @Test
        void lengthOfProjection_greaterThanZero() {
            assertContains(gen("length(Images[]) > `0`", PathComparator.BOOLEAN_EQUALS),
                "return (result.GetImages().size() > 0) == expected.get<bool>();");
        }

        @Test
        void lengthOfProjection_equalsZero() {
            assertContains(gen("length(SecurityGroupVpcAssociations[]) == `0`", PathComparator.BOOLEAN_EQUALS),
                "return (result.GetSecurityGroupVpcAssociations().size() == 0) == expected.get<bool>();");
        }

        @Test
        void lengthOfField_greaterThanZero() {
            assertContains(gen("length(PasswordData) > `0`", PathComparator.BOOLEAN_EQUALS),
                "return (result.GetPasswordData().size() > 0) == expected.get<bool>();");
        }

        @Test
        void lengthOfProjectionWithField_greaterThanZero() {
            String code = gen("length(KeyPairs[].KeyName) > `0`", PathComparator.BOOLEAN_EQUALS);
            assertContains(code, "result.GetKeyPairs().size() > 0");
            assertContains(code, "== expected.get<bool>();");
        }

        @Test
        void lengthOfNestedField_greaterThanZero() {
            assertContains(gen("length(InternetGateways[].InternetGatewayId) > `0`", PathComparator.BOOLEAN_EQUALS),
                "result.GetInternetGateways().size() > 0");
        }

        @Test
        void noModel_returnsEmptyEnumIncludes() {
            var result = WaiterJmesPathCppCodeGenerator.generate(
                "Items[].State", PathComparator.ALL_STRING_EQUALS, OUTCOME, null, null, "testService");
            assertTrue(result.getEnumIncludes().isEmpty());
        }
    }

    // ── Enum resolution tests ────────────────────────────────────────────

    @Nested
    class EnumResolutionTests {

        private Model buildSimpleEnumModel() {
            EnumShape enumShape = EnumShape.builder()
                .id("test.ns#ItemState")
                .addMember("active", "active")
                .addMember("inactive", "inactive")
                .build();
            StructureShape itemShape = StructureShape.builder()
                .id("test.ns#Item")
                .addMember("State", enumShape.getId())
                .build();
            ListShape listShape = ListShape.builder()
                .id("test.ns#ItemList")
                .member(itemShape.getId())
                .build();
            StructureShape outputShape = StructureShape.builder()
                .id("test.ns#DescribeItemsOutput")
                .addMember("Items", listShape.getId())
                .build();
            StructureShape inputShape = StructureShape.builder()
                .id("test.ns#DescribeItemsInput")
                .build();
            OperationShape opShape = OperationShape.builder()
                .id("test.ns#DescribeItems")
                .input(inputShape.getId())
                .output(outputShape.getId())
                .build();
            return Model.builder()
                .addShapes(enumShape, itemShape, listShape, outputShape, inputShape, opShape)
                .build();
        }

        private Model buildNestedEnumModel() {
            EnumShape enumShape = EnumShape.builder()
                .id("test.ns#DetailStatus")
                .addMember("ok", "ok")
                .addMember("error", "error")
                .build();
            StructureShape detailShape = StructureShape.builder()
                .id("test.ns#Detail")
                .addMember("Status", enumShape.getId())
                .build();
            StructureShape itemShape = StructureShape.builder()
                .id("test.ns#Item")
                .addMember("Detail", detailShape.getId())
                .build();
            ListShape listShape = ListShape.builder()
                .id("test.ns#ItemList")
                .member(itemShape.getId())
                .build();
            StructureShape outputShape = StructureShape.builder()
                .id("test.ns#DescribeItemsOutput")
                .addMember("Items", listShape.getId())
                .build();
            StructureShape inputShape = StructureShape.builder()
                .id("test.ns#DescribeItemsInput")
                .build();
            OperationShape opShape = OperationShape.builder()
                .id("test.ns#DescribeItems")
                .input(inputShape.getId())
                .output(outputShape.getId())
                .build();
            return Model.builder()
                .addShapes(enumShape, detailShape, itemShape, listShape, outputShape, inputShape, opShape)
                .build();
        }

        private Model buildStringLeafModel() {
            StructureShape itemShape = StructureShape.builder()
                .id("test.ns#Item")
                .addMember("Name", ShapeId.from("smithy.api#String"))
                .build();
            ListShape listShape = ListShape.builder()
                .id("test.ns#ItemList")
                .member(itemShape.getId())
                .build();
            StructureShape outputShape = StructureShape.builder()
                .id("test.ns#DescribeItemsOutput")
                .addMember("Items", listShape.getId())
                .build();
            StructureShape inputShape = StructureShape.builder()
                .id("test.ns#DescribeItemsInput")
                .build();
            OperationShape opShape = OperationShape.builder()
                .id("test.ns#DescribeItems")
                .input(inputShape.getId())
                .output(outputShape.getId())
                .build();
            return Model.builder()
                .addShapes(itemShape, listShape, outputShape, inputShape, opShape)
                .build();
        }

        private Model buildNestedProjectionEnumModel() {
            EnumShape enumShape = EnumShape.builder()
                .id("test.ns#MyStatus")
                .addMember("running", "running")
                .addMember("stopped", "stopped")
                .build();
            StructureShape infoShape = StructureShape.builder()
                .id("test.ns#Info")
                .addMember("Status", enumShape.getId())
                .build();
            StructureShape innerShape = StructureShape.builder()
                .id("test.ns#Inner")
                .addMember("Info", infoShape.getId())
                .build();
            ListShape innerList = ListShape.builder()
                .id("test.ns#InnerList")
                .member(innerShape.getId())
                .build();
            StructureShape outerShape = StructureShape.builder()
                .id("test.ns#Outer")
                .addMember("Inner", innerList.getId())
                .build();
            ListShape outerList = ListShape.builder()
                .id("test.ns#OuterList")
                .member(outerShape.getId())
                .build();
            StructureShape outputShape = StructureShape.builder()
                .id("test.ns#DescribeOutput")
                .addMember("Outer", outerList.getId())
                .build();
            StructureShape inputShape = StructureShape.builder()
                .id("test.ns#DescribeInput")
                .build();
            OperationShape opShape = OperationShape.builder()
                .id("test.ns#Describe")
                .input(inputShape.getId())
                .output(outputShape.getId())
                .build();
            return Model.builder()
                .addShapes(enumShape, infoShape, innerShape, innerList, outerShape, outerList,
                           outputShape, inputShape, opShape)
                .build();
        }

        private Model buildCountIfModel() {
            StructureShape itemShape = StructureShape.builder()
                .id("test.ns#Item")
                .addMember("Status", ShapeId.from("smithy.api#String"))
                .build();
            ListShape listShape = ListShape.builder()
                .id("test.ns#ItemList")
                .member(itemShape.getId())
                .build();
            StructureShape outputShape = StructureShape.builder()
                .id("test.ns#DescribeItemsOutput")
                .addMember("Items", listShape.getId())
                .build();
            StructureShape inputShape = StructureShape.builder()
                .id("test.ns#DescribeItemsInput")
                .build();
            OperationShape opShape = OperationShape.builder()
                .id("test.ns#DescribeItems")
                .input(inputShape.getId())
                .output(outputShape.getId())
                .build();
            return Model.builder()
                .addShapes(itemShape, listShape, outputShape, inputShape, opShape)
                .build();
        }

        private OperationShape getOp(Model model, String name) {
            return model.expectShape(ShapeId.from("test.ns#" + name), OperationShape.class);
        }

        @Test
        void enumLeaf_wrapsInMapper() {
            Model model = buildSimpleEnumModel();
            OperationShape op = getOp(model, "DescribeItems");
            var result = WaiterJmesPathCppCodeGenerator.generate(
                "Items[].State", PathComparator.ALL_STRING_EQUALS, OUTCOME, model, op, "testService");

            assertContains(result.getCode(),
                "ItemStateMapper::GetNameForItemState(item.GetState()) == expected.get<Aws::String>()");
            assertEquals(Set.of("ItemState"), result.getEnumIncludes());
        }

        @Test
        void enumLeaf_nestedStruct_wrapsInMapper() {
            Model model = buildNestedEnumModel();
            OperationShape op = getOp(model, "DescribeItems");
            var result = WaiterJmesPathCppCodeGenerator.generate(
                "Items[].Detail.Status", PathComparator.ALL_STRING_EQUALS, OUTCOME, model, op, "testService");

            assertContains(result.getCode(),
                "DetailStatusMapper::GetNameForDetailStatus(item.GetDetail().GetStatus()) == expected.get<Aws::String>()");
            assertEquals(Set.of("DetailStatus"), result.getEnumIncludes());
        }

        @Test
        void stringLeaf_noMapperWrapping() {
            Model model = buildStringLeafModel();
            OperationShape op = getOp(model, "DescribeItems");
            var result = WaiterJmesPathCppCodeGenerator.generate(
                "Items[].Name", PathComparator.ALL_STRING_EQUALS, OUTCOME, model, op, "testService");

            assertContains(result.getCode(), "item.GetName() == expected.get<Aws::String>()");
            assertFalse(result.getCode().contains("Mapper"));
            assertTrue(result.getEnumIncludes().isEmpty());
        }

        @Test
        void nestedProjection_enumLeaf_wrapsInMapper() {
            Model model = buildNestedProjectionEnumModel();
            OperationShape op = getOp(model, "Describe");
            var result = WaiterJmesPathCppCodeGenerator.generate(
                "Outer[].Inner[].Info.Status", PathComparator.ALL_STRING_EQUALS, OUTCOME, model, op, "testService");

            assertContains(result.getCode(),
                "MyStatusMapper::GetNameForMyStatus(item1.GetInfo().GetStatus()) == expected.get<Aws::String>()");
            assertEquals(Set.of("MyStatus"), result.getEnumIncludes());
        }

        @Test
        void enumLeaf_anyStringEquals_wrapsInMapper() {
            Model model = buildSimpleEnumModel();
            OperationShape op = getOp(model, "DescribeItems");
            var result = WaiterJmesPathCppCodeGenerator.generate(
                "Items[].State", PathComparator.ANY_STRING_EQUALS, OUTCOME, model, op, "testService");

            assertContains(result.getCode(), "std::any_of");
            assertContains(result.getCode(), "ItemStateMapper::GetNameForItemState(item.GetState())");
        }

        @Test
        void nullModel_noEnumResolution() {
            var result = WaiterJmesPathCppCodeGenerator.generate(
                "Items[].State", PathComparator.ALL_STRING_EQUALS, OUTCOME, null, null, "testService");
            assertFalse(result.getCode().contains("Mapper"));
            assertTrue(result.getEnumIncludes().isEmpty());
        }

        @Test
        void withModel_usesConcreteTypeInLambda() {
            Model model = buildSimpleEnumModel();
            OperationShape op = getOp(model, "DescribeItems");
            var result = WaiterJmesPathCppCodeGenerator.generate(
                "Items[].State", PathComparator.ALL_STRING_EQUALS, OUTCOME, model, op, "testService");
            assertContains(result.getCode(), "(const Model::Item& item)");
            assertFalse(result.getCode().contains("const auto& item"));
        }

        @Test
        void withoutModel_usesAutoInLambda() {
            var result = WaiterJmesPathCppCodeGenerator.generate(
                "Items[].State", PathComparator.ALL_STRING_EQUALS, OUTCOME, null, null, "testService");
            assertContains(result.getCode(), "(const auto& item)");
        }

        @Test
        void nestedProjection_withModel_usesConcreteTypes() {
            Model model = buildNestedProjectionEnumModel();
            OperationShape op = getOp(model, "Describe");
            var result = WaiterJmesPathCppCodeGenerator.generate(
                "Outer[].Inner[].Info.Status", PathComparator.ALL_STRING_EQUALS, OUTCOME, model, op, "testService");
            assertContains(result.getCode(), "(const Model::Outer& item0)");
            assertContains(result.getCode(), "(const Model::Inner& item1)");
        }

        @Test
        void countIf_withModel_usesConcreteType() {
            Model model = buildCountIfModel();
            OperationShape op = getOp(model, "DescribeItems");
            var result = WaiterJmesPathCppCodeGenerator.generate(
                "length(Items[?Status == 'DISABLED']) == `0`",
                PathComparator.BOOLEAN_EQUALS, OUTCOME, model, op, "testService");
            assertContains(result.getCode(), "(const Model::Item& item)");
        }
    }

    // ── Brace-balancing tests ────────────────────────────────────────────

    @Nested
    class BraceBalancingTests {

        @Test
        void singleProjection() { assertBalanced("Items[].Status", PathComparator.ALL_STRING_EQUALS); }
        @Test
        void nestedProjection() { assertBalanced("Reservations[].Instances[].State.Name", PathComparator.ALL_STRING_EQUALS); }
        @Test
        void comparison() { assertBalanced("length(Images[]) > `0`", PathComparator.BOOLEAN_EQUALS); }
        @Test
        void directField() { assertBalanced("Status", PathComparator.STRING_EQUALS); }

        private void assertBalanced(String jmesPath, PathComparator comparator) {
            String code = gen(jmesPath, comparator);
            int braces = 0, parens = 0;
            for (char c : code.toCharArray()) {
                if (c == '{') braces++;
                else if (c == '}') braces--;
                else if (c == '(') parens++;
                else if (c == ')') parens--;
            }
            assertEquals(0, braces, "Unbalanced braces in:\n" + code);
            assertEquals(0, parens, "Unbalanced parens in:\n" + code);
        }
    }

    // ── Real EC2 waiter expressions ──────────────────────────────────────

    @Nested
    class Ec2WaiterExpressionTests {

        @ParameterizedTest(name = "{0} ({1})")
        @CsvSource({
            "BundleTasks[].State,                                ALL_STRING_EQUALS",
            "ConversionTasks[].State,                            ALL_STRING_EQUALS",
            "CustomerGateways[].State,                           ALL_STRING_EQUALS",
            "ExportTasks[].State,                                ALL_STRING_EQUALS",
            "Images[].State,                                     ALL_STRING_EQUALS",
            "NatGateways[].State,                                ALL_STRING_EQUALS",
            "NetworkInterfaces[].Status,                         ALL_STRING_EQUALS",
            "Snapshots[].State,                                  ALL_STRING_EQUALS",
            "Subnets[].State,                                    ALL_STRING_EQUALS",
            "Volumes[].State,                                    ALL_STRING_EQUALS",
            "Vpcs[].State,                                       ALL_STRING_EQUALS",
            "VpnConnections[].State,                             ALL_STRING_EQUALS",
            "BundleTasks[].State,                                ANY_STRING_EQUALS",
            "NatGateways[].State,                                ANY_STRING_EQUALS",
            "VpnConnections[].State,                             ANY_STRING_EQUALS",
            "ImportSnapshotTasks[].SnapshotTaskDetail.Status,    ALL_STRING_EQUALS",
            "InstanceStatuses[].InstanceStatus.Status,           ALL_STRING_EQUALS",
            "InstanceStatuses[].SystemStatus.Status,             ALL_STRING_EQUALS",
            "SpotInstanceRequests[].Status.Code,                 ALL_STRING_EQUALS",
            "VpcPeeringConnections[].Status.Code,                ALL_STRING_EQUALS",
            "Reservations[].Instances[].State.Name,              ALL_STRING_EQUALS",
            "Reservations[].Instances[].State.Name,              ANY_STRING_EQUALS",
        })
        void pathExpression_generatesValidCode(String jmesPath, String comparator) {
            var result = WaiterJmesPathCppCodeGenerator.generate(
                jmesPath, PathComparator.valueOf(comparator), OUTCOME, null, null, "testService");
            String code = result.getCode();

            assertNotNull(code);
            assertContains(code, "outcome.IsSuccess()");
            assertContains(code, "outcome.GetResult()");
            if (comparator.equals("ALL_STRING_EQUALS")) {
                assertContains(code, "std::all_of");
            } else {
                assertContains(code, "std::any_of");
            }
        }

        @ParameterizedTest(name = "{0}")
        @CsvSource({
            "length(Images[]) > `0`",
            "length(InternetGateways[].InternetGatewayId) > `0`",
            "length(KeyPairs[].KeyName) > `0`",
            "length(PasswordData) > `0`",
            "length(Reservations[]) > `0`",
            "length(SecurityGroupVpcAssociations[]) == `0`",
            "length(SecurityGroups[].GroupId) > `0`",
        })
        void comparisonExpression_generatesValidCode(String jmesPath) {
            String code = WaiterJmesPathCppCodeGenerator.generate(
                jmesPath, PathComparator.BOOLEAN_EQUALS, OUTCOME, null, null, "testService").getCode();

            assertNotNull(code);
            assertContains(code, ".size()");
            assertContains(code, "expected.get<bool>()");
        }
    }

    // ── AND expression tests ──────────────────────────────────────────────

    @Nested
    class AndExpressionTests {

        @Test
        void andExpression_twoComparators() {
            String code = gen("status != 'CANCELLING' && status != 'CANCELLED'", PathComparator.BOOLEAN_EQUALS);
            assertContains(code, "result.GetStatus() != \"CANCELLING\"");
            assertContains(code, "result.GetStatus() != \"CANCELLED\"");
            assertContains(code, "&&");
            assertContains(code, "== expected.get<bool>();");
        }

        @Test
        void andExpression_bracesBalanced() {
            assertBalanced("status != 'CANCELLING' && status != 'CANCELLED'", PathComparator.BOOLEAN_EQUALS);
        }

        @Test
        void filterProjectionComparison_withoutAnd() {
            String expr = "length(Items[?Status == 'DISABLED' || Status == 'FAILED']) == length(Items)";
            String code = gen(expr, PathComparator.BOOLEAN_EQUALS);
            assertContains(code, "std::count_if");
            assertContains(code, "item.GetStatus() == \"DISABLED\"");
            assertContains(code, "item.GetStatus() == \"FAILED\"");
            assertContains(code, "result.GetItems().size()");
            assertContains(code, "== expected.get<bool>();");
        }

        @Test
        void filterProjection_notWithLengthAndFieldComparison() {
            String expr = "length(services[?!(length(deployments) == `1` && runningCount == desiredCount)]) == `0`";
            String code = gen(expr, PathComparator.BOOLEAN_EQUALS);
            assertContains(code, "std::count_if");
            assertContains(code, "item.GetDeployments().size() == 1");
            assertContains(code, "item.GetRunningCount() == item.GetDesiredCount()");
            assertContains(code, "!");
            assertContains(code, "== 0");
            assertContains(code, "== expected.get<bool>();");
        }

        @Test
        void andExpression_lengthWithFilterProjection() {
            String expr = "length(KinesisDataStreamDestinations) > `0` && "
                    + "length(KinesisDataStreamDestinations[?DestinationStatus == 'DISABLED' "
                    + "|| DestinationStatus == 'ENABLE_FAILED']) == length(KinesisDataStreamDestinations)";
            String code = gen(expr, PathComparator.BOOLEAN_EQUALS);
            assertContains(code, "result.GetKinesisDataStreamDestinations().size() > 0");
            assertContains(code, "std::count_if");
            assertContains(code, "item.GetDestinationStatus() == \"DISABLED\"");
            assertContains(code, "item.GetDestinationStatus() == \"ENABLE_FAILED\"");
            assertContains(code, "||");
            assertContains(code, "== expected.get<bool>();");
            assertBalanced(expr, PathComparator.BOOLEAN_EQUALS);
        }

        private void assertBalanced(String jmesPath, PathComparator comparator) {
            String code = gen(jmesPath, comparator);
            int braces = 0, parens = 0;
            for (char c : code.toCharArray()) {
                if (c == '{') braces++;
                else if (c == '}') braces--;
                else if (c == '(') parens++;
                else if (c == ')') parens--;
            }
            assertEquals(0, braces, "Unbalanced braces in:\n" + code);
            assertEquals(0, parens, "Unbalanced parens in:\n" + code);
        }
    }

    // ── contains() expression tests ───────────────────────────────────

    @Nested
    class ContainsExpressionTests {

        @Test
        void contains_autoScalingGroupMinSize() {
            String expr = "contains(AutoScalingGroups[].[length(Instances[?LifecycleState=='InService']) >= MinSize][], `false`)";
            String code = gen(expr, PathComparator.BOOLEAN_EQUALS);
            assertContains(code, "std::any_of(result.GetAutoScalingGroups().begin()");
            assertContains(code, "std::count_if(item.GetInstances().begin(), item.GetInstances().end()");
            assertContains(code, "inner.GetLifecycleState() == \"InService\"");
            assertContains(code, ">= item.GetMinSize()");
            assertContains(code, "== expected.get<bool>();");
        }

        @Test
        void contains_bracesBalanced() {
            String expr = "contains(AutoScalingGroups[].[length(Instances[?LifecycleState=='InService']) >= MinSize][], `false`)";
            String code = gen(expr, PathComparator.BOOLEAN_EQUALS);
            int braces = 0, parens = 0;
            for (char c : code.toCharArray()) {
                if (c == '{') braces++;
                else if (c == '}') braces--;
                else if (c == '(') parens++;
                else if (c == ')') parens--;
            }
            assertEquals(0, braces, "Unbalanced braces in:\n" + code);
            assertEquals(0, parens, "Unbalanced parens in:\n" + code);
        }
    }

    // ── Object projection (map wildcard) tests ──────────────────────────

    @Nested
    class ObjectProjectionTests {

        @Test
        void objectProjection_simpleMapWildcard() {
            // VerificationAttributes.*.VerificationStatus
            String code = gen("VerificationAttributes.*.VerificationStatus", PathComparator.ALL_STRING_EQUALS);
            assertContains(code, "std::all_of(result.GetVerificationAttributes().begin(), result.GetVerificationAttributes().end(),");
            assertContains(code, ".second");
            assertContains(code, ".GetVerificationStatus() == expected.get<Aws::String>()");
        }

        @Test
        void objectProjection_anyStringEquals() {
            String code = gen("VerificationAttributes.*.VerificationStatus", PathComparator.ANY_STRING_EQUALS);
            assertContains(code, "std::any_of");
            assertContains(code, ".second");
        }

        private Model buildMapModel() {
            EnumShape enumShape = EnumShape.builder()
                .id("test.ns#VerificationStatus")
                .addMember("Success", "Success")
                .addMember("Pending", "Pending")
                .addMember("Failed", "Failed")
                .build();
            StructureShape attrShape = StructureShape.builder()
                .id("test.ns#IdentityVerificationAttributes")
                .addMember("VerificationStatus", enumShape.getId())
                .build();
            MapShape mapShape = MapShape.builder()
                .id("test.ns#VerificationAttributesMap")
                .key(ShapeId.from("smithy.api#String"))
                .value(attrShape.getId())
                .build();
            StructureShape outputShape = StructureShape.builder()
                .id("test.ns#GetIdentityVerificationAttributesOutput")
                .addMember("VerificationAttributes", mapShape.getId())
                .build();
            StructureShape inputShape = StructureShape.builder()
                .id("test.ns#GetIdentityVerificationAttributesInput")
                .build();
            OperationShape opShape = OperationShape.builder()
                .id("test.ns#GetIdentityVerificationAttributes")
                .input(inputShape.getId())
                .output(outputShape.getId())
                .build();
            return Model.builder()
                .addShapes(enumShape, attrShape, mapShape, outputShape, inputShape, opShape)
                .build();
        }

        @Test
        void objectProjection_enumLeaf_wrapsInMapper() {
            Model model = buildMapModel();
            OperationShape op = model.expectShape(
                ShapeId.from("test.ns#GetIdentityVerificationAttributes"), OperationShape.class);

            var result = WaiterJmesPathCppCodeGenerator.generate(
                "VerificationAttributes.*.VerificationStatus",
                PathComparator.ALL_STRING_EQUALS, OUTCOME, model, op, "testService");

            assertContains(result.getCode(),
                "VerificationStatusMapper::GetNameForVerificationStatus(item.GetVerificationStatus())");
            assertContains(result.getCode(), ".second");
            assertEquals(Set.of("VerificationStatus"), result.getEnumIncludes());
        }

        @Test
        void objectProjection_withModel_usesConcreteMapTypes() {
            Model model = buildMapModel();
            OperationShape op = model.expectShape(
                ShapeId.from("test.ns#GetIdentityVerificationAttributes"), OperationShape.class);

            var result = WaiterJmesPathCppCodeGenerator.generate(
                "VerificationAttributes.*.VerificationStatus",
                PathComparator.ALL_STRING_EQUALS, OUTCOME, model, op, "testService");

            assertContains(result.getCode(),
                "std::pair<const Aws::String, Model::IdentityVerificationAttributes>& pair0");
            assertContains(result.getCode(),
                "const Model::IdentityVerificationAttributes& item");
            assertFalse(result.getCode().contains("const auto& pair"));
            assertFalse(result.getCode().contains("const auto& item"));
        }

        @Test
        void objectProjection_bracesBalanced() {
            String code = gen("VerificationAttributes.*.VerificationStatus", PathComparator.ALL_STRING_EQUALS);
            int braces = 0, parens = 0;
            for (char c : code.toCharArray()) {
                if (c == '{') braces++;
                else if (c == '}') braces--;
                else if (c == '(') parens++;
                else if (c == ')') parens--;
            }
            assertEquals(0, braces, "Unbalanced braces in:\n" + code);
            assertEquals(0, parens, "Unbalanced parens in:\n" + code);
        }
    }

    // ── Error handling ───────────────────────────────────────────────────

    @Nested
    class ErrorHandlingTests {

        @Test
        void unsupportedFunction_throws() {
            assertThrows(UnsupportedOperationException.class, () ->
                WaiterJmesPathCppCodeGenerator.generate(
                    "sort(Items[]) > `0`", PathComparator.BOOLEAN_EQUALS, OUTCOME, null, null, "testService"));
        }
    }

    // ── Helpers ──────────────────────────────────────────────────────────

    private void assertContains(String haystack, String needle) {
        assertTrue(haystack.contains(needle),
            "Expected to find:\n  " + needle + "\nin:\n" + haystack);
    }
}
