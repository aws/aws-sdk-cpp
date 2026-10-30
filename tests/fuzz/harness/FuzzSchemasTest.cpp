/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/memory/stl/AWSSet.h>
#include <gtest/gtest.h>
#include <harness/FuzzSchemas.h>
#include <smithy/client/schema/Schema.h>
#include <smithy/client/schema/SerdeTraits.h>
#include <smithy/client/schema/XmlTraits.h>

#include <functional>

using namespace smithy::schema;
using namespace smithy::schema::fuzz;

TEST(FuzzSchemas, RootsAreUniqueStructuresOrUnions) {
  Aws::Set<Aws::String> ids;
  for (const auto& root : FuzzSchemas()) {
    EXPECT_TRUE(root->GetType() == ShapeType::Structure || root->GetType() == ShapeType::Union) << root->GetId();
    EXPECT_TRUE(ids.insert(root->GetId()).second) << "duplicate " << root->GetId();
    EXPECT_EQ(Aws::String(root->GetId()).find('#'), Aws::String::npos) << root->GetId();
  }
  EXPECT_EQ(ids.size(), 49u);
}

TEST(FuzzSchemas, EveryMemberTargetResolves) {
  Aws::Set<const Schema*> visited;
  std::function<void(const Schema&)> walk = [&](const Schema& shape) {
    if (!visited.insert(&shape).second) {
      return;
    }
    for (uint16_t i = 0; i < shape.GetMemberCount(); ++i) {
      const auto member = shape.GetMember(static_cast<int>(i));
      ASSERT_TRUE(member.has_value() && *member) << shape.GetId() << " member " << i;
      const auto target = (*member)->GetMemberTarget();
      ASSERT_TRUE(target.has_value() && *target) << (*member)->GetId();
      walk(**target);
    }
  };
  for (const auto& root : FuzzSchemas()) {
    walk(*root);
  }
}

TEST(FuzzSchemas, NodeIsSelfRecursive) {
  const auto node = FindFuzzSchema("Node");
  ASSERT_NE(node, nullptr);
  EXPECT_EQ(node->GetMember("child").value()->GetMemberTarget().value().get(), node.get());
  const auto children = node->GetMember("children").value()->GetMemberTarget().value();
  EXPECT_EQ(children->GetMember("member").value()->GetMemberTarget().value().get(), node.get());
}

TEST(FuzzSchemas, TraitVariantsCarryTraits) {
  const auto xml = FindFuzzSchema("XmlTraits");
  ASSERT_NE(xml, nullptr);
  EXPECT_TRUE(xml->HasTrait(XmlNameTrait::KEY()));
  EXPECT_TRUE(xml->GetMember("attr").value()->HasTrait(XmlAttributeTrait::KEY()));
  EXPECT_TRUE(xml->GetMember("flatList").value()->HasTrait(XmlFlattenedTrait::KEY()));
  for (const char* attr : {"fltAttr", "dblAttr", "boolAttr", "tsAttr"}) {
    EXPECT_TRUE(xml->GetMember(attr).value()->HasTrait(XmlAttributeTrait::KEY())) << attr;
  }
  EXPECT_TRUE(xml->GetMember("nsMember").value()->HasTrait(XmlNamespaceTrait::KEY()));
  const auto containers = FindFuzzSchema("ContainerTraits");
  ASSERT_NE(containers, nullptr);
  const auto dateTimes = containers->GetMember("dateTimes").value()->GetMemberTarget().value();
  EXPECT_TRUE(dateTimes->GetMember("member").value()->HasTrait(TimestampFormatTrait::KEY()));
  const auto byEnum = containers->GetMember("byEnum").value()->GetMemberTarget().value();
  EXPECT_EQ(byEnum->GetMember("key").value()->GetType(), ShapeType::Enum);
  const auto ec2 = FindFuzzSchema("Ec2Named");
  ASSERT_NE(ec2, nullptr);
  EXPECT_TRUE(ec2->GetMember("renamed").value()->HasTrait(Ec2QueryNameTrait::KEY()));
  ASSERT_NE(FindFuzzSchema("JsonNamed"), nullptr);
  ASSERT_NE(FindFuzzSchema("Timestamps"), nullptr);
  EXPECT_EQ(DocumentHolderSchema()->GetMember("payload").value()->GetType(), ShapeType::Document);
}
