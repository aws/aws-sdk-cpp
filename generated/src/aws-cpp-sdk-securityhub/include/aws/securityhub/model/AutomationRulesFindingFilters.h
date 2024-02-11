/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/StringFilter.h>
#include <aws/securityhub/model/DateFilter.h>
#include <aws/securityhub/model/NumberFilter.h>
#include <aws/securityhub/model/MapFilter.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SecurityHub
{
namespace Model
{

  /**
   * <p> The criteria that determine which findings a rule applies to. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AutomationRulesFindingFilters">AWS
   * API Reference</a></p>
   */
  class AutomationRulesFindingFilters
  {
  public:
    AWS_SECURITYHUB_API AutomationRulesFindingFilters();
    AWS_SECURITYHUB_API AutomationRulesFindingFilters(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AutomationRulesFindingFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The Amazon Resource Name (ARN) for a third-party product that generated a
     * finding in Security Hub. </p> <p> Array Members: Minimum number of 1 item.
     * Maximum number of 20 items. </p>
     */
    inline const Aws::Vector<StringFilter>& GetProductArn() const{ return m_productArn; }

    /**
     * <p> The Amazon Resource Name (ARN) for a third-party product that generated a
     * finding in Security Hub. </p> <p> Array Members: Minimum number of 1 item.
     * Maximum number of 20 items. </p>
     */
    inline bool ProductArnHasBeenSet() const { return m_productArnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) for a third-party product that generated a
     * finding in Security Hub. </p> <p> Array Members: Minimum number of 1 item.
     * Maximum number of 20 items. </p>
     */
    inline void SetProductArn(const Aws::Vector<StringFilter>& value) { m_productArnHasBeenSet = true; m_productArn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) for a third-party product that generated a
     * finding in Security Hub. </p> <p> Array Members: Minimum number of 1 item.
     * Maximum number of 20 items. </p>
     */
    inline void SetProductArn(Aws::Vector<StringFilter>&& value) { m_productArnHasBeenSet = true; m_productArn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) for a third-party product that generated a
     * finding in Security Hub. </p> <p> Array Members: Minimum number of 1 item.
     * Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& WithProductArn(const Aws::Vector<StringFilter>& value) { SetProductArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) for a third-party product that generated a
     * finding in Security Hub. </p> <p> Array Members: Minimum number of 1 item.
     * Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& WithProductArn(Aws::Vector<StringFilter>&& value) { SetProductArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) for a third-party product that generated a
     * finding in Security Hub. </p> <p> Array Members: Minimum number of 1 item.
     * Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& AddProductArn(const StringFilter& value) { m_productArnHasBeenSet = true; m_productArn.push_back(value); return *this; }

    /**
     * <p> The Amazon Resource Name (ARN) for a third-party product that generated a
     * finding in Security Hub. </p> <p> Array Members: Minimum number of 1 item.
     * Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& AddProductArn(StringFilter&& value) { m_productArnHasBeenSet = true; m_productArn.push_back(std::move(value)); return *this; }


    /**
     * <p>The Amazon Web Services account ID in which a finding was generated.</p> <p>
     * Array Members: Minimum number of 1 item. Maximum number of 100 items. </p>
     */
    inline const Aws::Vector<StringFilter>& GetAwsAccountId() const{ return m_awsAccountId; }

    /**
     * <p>The Amazon Web Services account ID in which a finding was generated.</p> <p>
     * Array Members: Minimum number of 1 item. Maximum number of 100 items. </p>
     */
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services account ID in which a finding was generated.</p> <p>
     * Array Members: Minimum number of 1 item. Maximum number of 100 items. </p>
     */
    inline void SetAwsAccountId(const Aws::Vector<StringFilter>& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }

    /**
     * <p>The Amazon Web Services account ID in which a finding was generated.</p> <p>
     * Array Members: Minimum number of 1 item. Maximum number of 100 items. </p>
     */
    inline void SetAwsAccountId(Aws::Vector<StringFilter>&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID in which a finding was generated.</p> <p>
     * Array Members: Minimum number of 1 item. Maximum number of 100 items. </p>
     */
    inline AutomationRulesFindingFilters& WithAwsAccountId(const Aws::Vector<StringFilter>& value) { SetAwsAccountId(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID in which a finding was generated.</p> <p>
     * Array Members: Minimum number of 1 item. Maximum number of 100 items. </p>
     */
    inline AutomationRulesFindingFilters& WithAwsAccountId(Aws::Vector<StringFilter>&& value) { SetAwsAccountId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID in which a finding was generated.</p> <p>
     * Array Members: Minimum number of 1 item. Maximum number of 100 items. </p>
     */
    inline AutomationRulesFindingFilters& AddAwsAccountId(const StringFilter& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.push_back(value); return *this; }

    /**
     * <p>The Amazon Web Services account ID in which a finding was generated.</p> <p>
     * Array Members: Minimum number of 1 item. Maximum number of 100 items. </p>
     */
    inline AutomationRulesFindingFilters& AddAwsAccountId(StringFilter&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.push_back(std::move(value)); return *this; }


    /**
     * <p> The product-specific identifier for a finding. </p> <p> Array Members:
     * Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline const Aws::Vector<StringFilter>& GetId() const{ return m_id; }

    /**
     * <p> The product-specific identifier for a finding. </p> <p> Array Members:
     * Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p> The product-specific identifier for a finding. </p> <p> Array Members:
     * Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline void SetId(const Aws::Vector<StringFilter>& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p> The product-specific identifier for a finding. </p> <p> Array Members:
     * Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline void SetId(Aws::Vector<StringFilter>&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p> The product-specific identifier for a finding. </p> <p> Array Members:
     * Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& WithId(const Aws::Vector<StringFilter>& value) { SetId(value); return *this;}

    /**
     * <p> The product-specific identifier for a finding. </p> <p> Array Members:
     * Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& WithId(Aws::Vector<StringFilter>&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p> The product-specific identifier for a finding. </p> <p> Array Members:
     * Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& AddId(const StringFilter& value) { m_idHasBeenSet = true; m_id.push_back(value); return *this; }

    /**
     * <p> The product-specific identifier for a finding. </p> <p> Array Members:
     * Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& AddId(StringFilter&& value) { m_idHasBeenSet = true; m_id.push_back(std::move(value)); return *this; }


    /**
     * <p> The identifier for the solution-specific component that generated a finding.
     * </p> <p> Array Members: Minimum number of 1 item. Maximum number of 100 items.
     * </p>
     */
    inline const Aws::Vector<StringFilter>& GetGeneratorId() const{ return m_generatorId; }

    /**
     * <p> The identifier for the solution-specific component that generated a finding.
     * </p> <p> Array Members: Minimum number of 1 item. Maximum number of 100 items.
     * </p>
     */
    inline bool GeneratorIdHasBeenSet() const { return m_generatorIdHasBeenSet; }

    /**
     * <p> The identifier for the solution-specific component that generated a finding.
     * </p> <p> Array Members: Minimum number of 1 item. Maximum number of 100 items.
     * </p>
     */
    inline void SetGeneratorId(const Aws::Vector<StringFilter>& value) { m_generatorIdHasBeenSet = true; m_generatorId = value; }

    /**
     * <p> The identifier for the solution-specific component that generated a finding.
     * </p> <p> Array Members: Minimum number of 1 item. Maximum number of 100 items.
     * </p>
     */
    inline void SetGeneratorId(Aws::Vector<StringFilter>&& value) { m_generatorIdHasBeenSet = true; m_generatorId = std::move(value); }

    /**
     * <p> The identifier for the solution-specific component that generated a finding.
     * </p> <p> Array Members: Minimum number of 1 item. Maximum number of 100 items.
     * </p>
     */
    inline AutomationRulesFindingFilters& WithGeneratorId(const Aws::Vector<StringFilter>& value) { SetGeneratorId(value); return *this;}

    /**
     * <p> The identifier for the solution-specific component that generated a finding.
     * </p> <p> Array Members: Minimum number of 1 item. Maximum number of 100 items.
     * </p>
     */
    inline AutomationRulesFindingFilters& WithGeneratorId(Aws::Vector<StringFilter>&& value) { SetGeneratorId(std::move(value)); return *this;}

    /**
     * <p> The identifier for the solution-specific component that generated a finding.
     * </p> <p> Array Members: Minimum number of 1 item. Maximum number of 100 items.
     * </p>
     */
    inline AutomationRulesFindingFilters& AddGeneratorId(const StringFilter& value) { m_generatorIdHasBeenSet = true; m_generatorId.push_back(value); return *this; }

    /**
     * <p> The identifier for the solution-specific component that generated a finding.
     * </p> <p> Array Members: Minimum number of 1 item. Maximum number of 100 items.
     * </p>
     */
    inline AutomationRulesFindingFilters& AddGeneratorId(StringFilter&& value) { m_generatorIdHasBeenSet = true; m_generatorId.push_back(std::move(value)); return *this; }


    /**
     * <p> One or more finding types in the format of namespace/category/classifier
     * that classify a finding. For a list of namespaces, classifiers, and categories,
     * see <a
     * href="https://docs.aws.amazon.com/securityhub/latest/userguide/securityhub-findings-format-type-taxonomy.html">Types
     * taxonomy for ASFF</a> in the <i>Security Hub User Guide</i>.</p> <p> Array
     * Members: Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline const Aws::Vector<StringFilter>& GetType() const{ return m_type; }

    /**
     * <p> One or more finding types in the format of namespace/category/classifier
     * that classify a finding. For a list of namespaces, classifiers, and categories,
     * see <a
     * href="https://docs.aws.amazon.com/securityhub/latest/userguide/securityhub-findings-format-type-taxonomy.html">Types
     * taxonomy for ASFF</a> in the <i>Security Hub User Guide</i>.</p> <p> Array
     * Members: Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p> One or more finding types in the format of namespace/category/classifier
     * that classify a finding. For a list of namespaces, classifiers, and categories,
     * see <a
     * href="https://docs.aws.amazon.com/securityhub/latest/userguide/securityhub-findings-format-type-taxonomy.html">Types
     * taxonomy for ASFF</a> in the <i>Security Hub User Guide</i>.</p> <p> Array
     * Members: Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline void SetType(const Aws::Vector<StringFilter>& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p> One or more finding types in the format of namespace/category/classifier
     * that classify a finding. For a list of namespaces, classifiers, and categories,
     * see <a
     * href="https://docs.aws.amazon.com/securityhub/latest/userguide/securityhub-findings-format-type-taxonomy.html">Types
     * taxonomy for ASFF</a> in the <i>Security Hub User Guide</i>.</p> <p> Array
     * Members: Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline void SetType(Aws::Vector<StringFilter>&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p> One or more finding types in the format of namespace/category/classifier
     * that classify a finding. For a list of namespaces, classifiers, and categories,
     * see <a
     * href="https://docs.aws.amazon.com/securityhub/latest/userguide/securityhub-findings-format-type-taxonomy.html">Types
     * taxonomy for ASFF</a> in the <i>Security Hub User Guide</i>.</p> <p> Array
     * Members: Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& WithType(const Aws::Vector<StringFilter>& value) { SetType(value); return *this;}

    /**
     * <p> One or more finding types in the format of namespace/category/classifier
     * that classify a finding. For a list of namespaces, classifiers, and categories,
     * see <a
     * href="https://docs.aws.amazon.com/securityhub/latest/userguide/securityhub-findings-format-type-taxonomy.html">Types
     * taxonomy for ASFF</a> in the <i>Security Hub User Guide</i>.</p> <p> Array
     * Members: Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& WithType(Aws::Vector<StringFilter>&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p> One or more finding types in the format of namespace/category/classifier
     * that classify a finding. For a list of namespaces, classifiers, and categories,
     * see <a
     * href="https://docs.aws.amazon.com/securityhub/latest/userguide/securityhub-findings-format-type-taxonomy.html">Types
     * taxonomy for ASFF</a> in the <i>Security Hub User Guide</i>.</p> <p> Array
     * Members: Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& AddType(const StringFilter& value) { m_typeHasBeenSet = true; m_type.push_back(value); return *this; }

    /**
     * <p> One or more finding types in the format of namespace/category/classifier
     * that classify a finding. For a list of namespaces, classifiers, and categories,
     * see <a
     * href="https://docs.aws.amazon.com/securityhub/latest/userguide/securityhub-findings-format-type-taxonomy.html">Types
     * taxonomy for ASFF</a> in the <i>Security Hub User Guide</i>.</p> <p> Array
     * Members: Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& AddType(StringFilter&& value) { m_typeHasBeenSet = true; m_type.push_back(std::move(value)); return *this; }


    /**
     * <p> A timestamp that indicates when the potential security issue captured by a
     * finding was first observed by the security findings product. </p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p> <p> Array Members: Minimum number of
     * 1 item. Maximum number of 20 items. </p>
     */
    inline const Aws::Vector<DateFilter>& GetFirstObservedAt() const{ return m_firstObservedAt; }

    /**
     * <p> A timestamp that indicates when the potential security issue captured by a
     * finding was first observed by the security findings product. </p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p> <p> Array Members: Minimum number of
     * 1 item. Maximum number of 20 items. </p>
     */
    inline bool FirstObservedAtHasBeenSet() const { return m_firstObservedAtHasBeenSet; }

    /**
     * <p> A timestamp that indicates when the potential security issue captured by a
     * finding was first observed by the security findings product. </p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p> <p> Array Members: Minimum number of
     * 1 item. Maximum number of 20 items. </p>
     */
    inline void SetFirstObservedAt(const Aws::Vector<DateFilter>& value) { m_firstObservedAtHasBeenSet = true; m_firstObservedAt = value; }

    /**
     * <p> A timestamp that indicates when the potential security issue captured by a
     * finding was first observed by the security findings product. </p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p> <p> Array Members: Minimum number of
     * 1 item. Maximum number of 20 items. </p>
     */
    inline void SetFirstObservedAt(Aws::Vector<DateFilter>&& value) { m_firstObservedAtHasBeenSet = true; m_firstObservedAt = std::move(value); }

    /**
     * <p> A timestamp that indicates when the potential security issue captured by a
     * finding was first observed by the security findings product. </p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p> <p> Array Members: Minimum number of
     * 1 item. Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& WithFirstObservedAt(const Aws::Vector<DateFilter>& value) { SetFirstObservedAt(value); return *this;}

    /**
     * <p> A timestamp that indicates when the potential security issue captured by a
     * finding was first observed by the security findings product. </p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p> <p> Array Members: Minimum number of
     * 1 item. Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& WithFirstObservedAt(Aws::Vector<DateFilter>&& value) { SetFirstObservedAt(std::move(value)); return *this;}

    /**
     * <p> A timestamp that indicates when the potential security issue captured by a
     * finding was first observed by the security findings product. </p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p> <p> Array Members: Minimum number of
     * 1 item. Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& AddFirstObservedAt(const DateFilter& value) { m_firstObservedAtHasBeenSet = true; m_firstObservedAt.push_back(value); return *this; }

    /**
     * <p> A timestamp that indicates when the potential security issue captured by a
     * finding was first observed by the security findings product. </p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p> <p> Array Members: Minimum number of
     * 1 item. Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& AddFirstObservedAt(DateFilter&& value) { m_firstObservedAtHasBeenSet = true; m_firstObservedAt.push_back(std::move(value)); return *this; }


    /**
     * <p> A timestamp that indicates when the potential security issue captured by a
     * finding was most recently observed by the security findings product. </p>
     * <p>Uses the <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p> <p> Array Members: Minimum number of
     * 1 item. Maximum number of 20 items. </p>
     */
    inline const Aws::Vector<DateFilter>& GetLastObservedAt() const{ return m_lastObservedAt; }

    /**
     * <p> A timestamp that indicates when the potential security issue captured by a
     * finding was most recently observed by the security findings product. </p>
     * <p>Uses the <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p> <p> Array Members: Minimum number of
     * 1 item. Maximum number of 20 items. </p>
     */
    inline bool LastObservedAtHasBeenSet() const { return m_lastObservedAtHasBeenSet; }

    /**
     * <p> A timestamp that indicates when the potential security issue captured by a
     * finding was most recently observed by the security findings product. </p>
     * <p>Uses the <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p> <p> Array Members: Minimum number of
     * 1 item. Maximum number of 20 items. </p>
     */
    inline void SetLastObservedAt(const Aws::Vector<DateFilter>& value) { m_lastObservedAtHasBeenSet = true; m_lastObservedAt = value; }

    /**
     * <p> A timestamp that indicates when the potential security issue captured by a
     * finding was most recently observed by the security findings product. </p>
     * <p>Uses the <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p> <p> Array Members: Minimum number of
     * 1 item. Maximum number of 20 items. </p>
     */
    inline void SetLastObservedAt(Aws::Vector<DateFilter>&& value) { m_lastObservedAtHasBeenSet = true; m_lastObservedAt = std::move(value); }

    /**
     * <p> A timestamp that indicates when the potential security issue captured by a
     * finding was most recently observed by the security findings product. </p>
     * <p>Uses the <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p> <p> Array Members: Minimum number of
     * 1 item. Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& WithLastObservedAt(const Aws::Vector<DateFilter>& value) { SetLastObservedAt(value); return *this;}

    /**
     * <p> A timestamp that indicates when the potential security issue captured by a
     * finding was most recently observed by the security findings product. </p>
     * <p>Uses the <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p> <p> Array Members: Minimum number of
     * 1 item. Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& WithLastObservedAt(Aws::Vector<DateFilter>&& value) { SetLastObservedAt(std::move(value)); return *this;}

    /**
     * <p> A timestamp that indicates when the potential security issue captured by a
     * finding was most recently observed by the security findings product. </p>
     * <p>Uses the <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p> <p> Array Members: Minimum number of
     * 1 item. Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& AddLastObservedAt(const DateFilter& value) { m_lastObservedAtHasBeenSet = true; m_lastObservedAt.push_back(value); return *this; }

    /**
     * <p> A timestamp that indicates when the potential security issue captured by a
     * finding was most recently observed by the security findings product. </p>
     * <p>Uses the <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p> <p> Array Members: Minimum number of
     * 1 item. Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& AddLastObservedAt(DateFilter&& value) { m_lastObservedAtHasBeenSet = true; m_lastObservedAt.push_back(std::move(value)); return *this; }


    /**
     * <p> A timestamp that indicates when this finding record was created. </p>
     * <p>Uses the <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p> <p> Array Members: Minimum number of
     * 1 item. Maximum number of 20 items. </p>
     */
    inline const Aws::Vector<DateFilter>& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p> A timestamp that indicates when this finding record was created. </p>
     * <p>Uses the <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p> <p> Array Members: Minimum number of
     * 1 item. Maximum number of 20 items. </p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p> A timestamp that indicates when this finding record was created. </p>
     * <p>Uses the <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p> <p> Array Members: Minimum number of
     * 1 item. Maximum number of 20 items. </p>
     */
    inline void SetCreatedAt(const Aws::Vector<DateFilter>& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p> A timestamp that indicates when this finding record was created. </p>
     * <p>Uses the <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p> <p> Array Members: Minimum number of
     * 1 item. Maximum number of 20 items. </p>
     */
    inline void SetCreatedAt(Aws::Vector<DateFilter>&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p> A timestamp that indicates when this finding record was created. </p>
     * <p>Uses the <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p> <p> Array Members: Minimum number of
     * 1 item. Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& WithCreatedAt(const Aws::Vector<DateFilter>& value) { SetCreatedAt(value); return *this;}

    /**
     * <p> A timestamp that indicates when this finding record was created. </p>
     * <p>Uses the <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p> <p> Array Members: Minimum number of
     * 1 item. Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& WithCreatedAt(Aws::Vector<DateFilter>&& value) { SetCreatedAt(std::move(value)); return *this;}

    /**
     * <p> A timestamp that indicates when this finding record was created. </p>
     * <p>Uses the <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p> <p> Array Members: Minimum number of
     * 1 item. Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& AddCreatedAt(const DateFilter& value) { m_createdAtHasBeenSet = true; m_createdAt.push_back(value); return *this; }

    /**
     * <p> A timestamp that indicates when this finding record was created. </p>
     * <p>Uses the <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p> <p> Array Members: Minimum number of
     * 1 item. Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& AddCreatedAt(DateFilter&& value) { m_createdAtHasBeenSet = true; m_createdAt.push_back(std::move(value)); return *this; }


    /**
     * <p> A timestamp that indicates when the finding record was most recently
     * updated. </p> <p>Uses the <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p> <p> Array Members: Minimum number of
     * 1 item. Maximum number of 20 items. </p>
     */
    inline const Aws::Vector<DateFilter>& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p> A timestamp that indicates when the finding record was most recently
     * updated. </p> <p>Uses the <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p> <p> Array Members: Minimum number of
     * 1 item. Maximum number of 20 items. </p>
     */
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    /**
     * <p> A timestamp that indicates when the finding record was most recently
     * updated. </p> <p>Uses the <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p> <p> Array Members: Minimum number of
     * 1 item. Maximum number of 20 items. </p>
     */
    inline void SetUpdatedAt(const Aws::Vector<DateFilter>& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    /**
     * <p> A timestamp that indicates when the finding record was most recently
     * updated. </p> <p>Uses the <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p> <p> Array Members: Minimum number of
     * 1 item. Maximum number of 20 items. </p>
     */
    inline void SetUpdatedAt(Aws::Vector<DateFilter>&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    /**
     * <p> A timestamp that indicates when the finding record was most recently
     * updated. </p> <p>Uses the <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p> <p> Array Members: Minimum number of
     * 1 item. Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& WithUpdatedAt(const Aws::Vector<DateFilter>& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p> A timestamp that indicates when the finding record was most recently
     * updated. </p> <p>Uses the <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p> <p> Array Members: Minimum number of
     * 1 item. Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& WithUpdatedAt(Aws::Vector<DateFilter>&& value) { SetUpdatedAt(std::move(value)); return *this;}

    /**
     * <p> A timestamp that indicates when the finding record was most recently
     * updated. </p> <p>Uses the <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p> <p> Array Members: Minimum number of
     * 1 item. Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& AddUpdatedAt(const DateFilter& value) { m_updatedAtHasBeenSet = true; m_updatedAt.push_back(value); return *this; }

    /**
     * <p> A timestamp that indicates when the finding record was most recently
     * updated. </p> <p>Uses the <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p> <p> Array Members: Minimum number of
     * 1 item. Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& AddUpdatedAt(DateFilter&& value) { m_updatedAtHasBeenSet = true; m_updatedAt.push_back(std::move(value)); return *this; }


    /**
     * <p>The likelihood that a finding accurately identifies the behavior or issue
     * that it was intended to identify. <code>Confidence</code> is scored on a 0–100
     * basis using a ratio scale. A value of <code>0</code> means 0 percent confidence,
     * and a value of <code>100</code> means 100 percent confidence. For example, a
     * data exfiltration detection based on a statistical deviation of network traffic
     * has low confidence because an actual exfiltration hasn't been verified. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/securityhub/latest/userguide/asff-top-level-attributes.html#asff-confidence">Confidence</a>
     * in the <i>Security Hub User Guide</i>.</p> <p> Array Members: Minimum number of
     * 1 item. Maximum number of 20 items. </p>
     */
    inline const Aws::Vector<NumberFilter>& GetConfidence() const{ return m_confidence; }

    /**
     * <p>The likelihood that a finding accurately identifies the behavior or issue
     * that it was intended to identify. <code>Confidence</code> is scored on a 0–100
     * basis using a ratio scale. A value of <code>0</code> means 0 percent confidence,
     * and a value of <code>100</code> means 100 percent confidence. For example, a
     * data exfiltration detection based on a statistical deviation of network traffic
     * has low confidence because an actual exfiltration hasn't been verified. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/securityhub/latest/userguide/asff-top-level-attributes.html#asff-confidence">Confidence</a>
     * in the <i>Security Hub User Guide</i>.</p> <p> Array Members: Minimum number of
     * 1 item. Maximum number of 20 items. </p>
     */
    inline bool ConfidenceHasBeenSet() const { return m_confidenceHasBeenSet; }

    /**
     * <p>The likelihood that a finding accurately identifies the behavior or issue
     * that it was intended to identify. <code>Confidence</code> is scored on a 0–100
     * basis using a ratio scale. A value of <code>0</code> means 0 percent confidence,
     * and a value of <code>100</code> means 100 percent confidence. For example, a
     * data exfiltration detection based on a statistical deviation of network traffic
     * has low confidence because an actual exfiltration hasn't been verified. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/securityhub/latest/userguide/asff-top-level-attributes.html#asff-confidence">Confidence</a>
     * in the <i>Security Hub User Guide</i>.</p> <p> Array Members: Minimum number of
     * 1 item. Maximum number of 20 items. </p>
     */
    inline void SetConfidence(const Aws::Vector<NumberFilter>& value) { m_confidenceHasBeenSet = true; m_confidence = value; }

    /**
     * <p>The likelihood that a finding accurately identifies the behavior or issue
     * that it was intended to identify. <code>Confidence</code> is scored on a 0–100
     * basis using a ratio scale. A value of <code>0</code> means 0 percent confidence,
     * and a value of <code>100</code> means 100 percent confidence. For example, a
     * data exfiltration detection based on a statistical deviation of network traffic
     * has low confidence because an actual exfiltration hasn't been verified. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/securityhub/latest/userguide/asff-top-level-attributes.html#asff-confidence">Confidence</a>
     * in the <i>Security Hub User Guide</i>.</p> <p> Array Members: Minimum number of
     * 1 item. Maximum number of 20 items. </p>
     */
    inline void SetConfidence(Aws::Vector<NumberFilter>&& value) { m_confidenceHasBeenSet = true; m_confidence = std::move(value); }

    /**
     * <p>The likelihood that a finding accurately identifies the behavior or issue
     * that it was intended to identify. <code>Confidence</code> is scored on a 0–100
     * basis using a ratio scale. A value of <code>0</code> means 0 percent confidence,
     * and a value of <code>100</code> means 100 percent confidence. For example, a
     * data exfiltration detection based on a statistical deviation of network traffic
     * has low confidence because an actual exfiltration hasn't been verified. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/securityhub/latest/userguide/asff-top-level-attributes.html#asff-confidence">Confidence</a>
     * in the <i>Security Hub User Guide</i>.</p> <p> Array Members: Minimum number of
     * 1 item. Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& WithConfidence(const Aws::Vector<NumberFilter>& value) { SetConfidence(value); return *this;}

    /**
     * <p>The likelihood that a finding accurately identifies the behavior or issue
     * that it was intended to identify. <code>Confidence</code> is scored on a 0–100
     * basis using a ratio scale. A value of <code>0</code> means 0 percent confidence,
     * and a value of <code>100</code> means 100 percent confidence. For example, a
     * data exfiltration detection based on a statistical deviation of network traffic
     * has low confidence because an actual exfiltration hasn't been verified. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/securityhub/latest/userguide/asff-top-level-attributes.html#asff-confidence">Confidence</a>
     * in the <i>Security Hub User Guide</i>.</p> <p> Array Members: Minimum number of
     * 1 item. Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& WithConfidence(Aws::Vector<NumberFilter>&& value) { SetConfidence(std::move(value)); return *this;}

    /**
     * <p>The likelihood that a finding accurately identifies the behavior or issue
     * that it was intended to identify. <code>Confidence</code> is scored on a 0–100
     * basis using a ratio scale. A value of <code>0</code> means 0 percent confidence,
     * and a value of <code>100</code> means 100 percent confidence. For example, a
     * data exfiltration detection based on a statistical deviation of network traffic
     * has low confidence because an actual exfiltration hasn't been verified. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/securityhub/latest/userguide/asff-top-level-attributes.html#asff-confidence">Confidence</a>
     * in the <i>Security Hub User Guide</i>.</p> <p> Array Members: Minimum number of
     * 1 item. Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& AddConfidence(const NumberFilter& value) { m_confidenceHasBeenSet = true; m_confidence.push_back(value); return *this; }

    /**
     * <p>The likelihood that a finding accurately identifies the behavior or issue
     * that it was intended to identify. <code>Confidence</code> is scored on a 0–100
     * basis using a ratio scale. A value of <code>0</code> means 0 percent confidence,
     * and a value of <code>100</code> means 100 percent confidence. For example, a
     * data exfiltration detection based on a statistical deviation of network traffic
     * has low confidence because an actual exfiltration hasn't been verified. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/securityhub/latest/userguide/asff-top-level-attributes.html#asff-confidence">Confidence</a>
     * in the <i>Security Hub User Guide</i>.</p> <p> Array Members: Minimum number of
     * 1 item. Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& AddConfidence(NumberFilter&& value) { m_confidenceHasBeenSet = true; m_confidence.push_back(std::move(value)); return *this; }


    /**
     * <p> The level of importance that is assigned to the resources that are
     * associated with a finding. <code>Criticality</code> is scored on a 0–100 basis,
     * using a ratio scale that supports only full integers. A score of <code>0</code>
     * means that the underlying resources have no criticality, and a score of
     * <code>100</code> is reserved for the most critical resources. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/securityhub/latest/userguide/asff-top-level-attributes.html#asff-criticality">Criticality</a>
     * in the <i>Security Hub User Guide</i>.</p> <p> Array Members: Minimum number of
     * 1 item. Maximum number of 20 items. </p>
     */
    inline const Aws::Vector<NumberFilter>& GetCriticality() const{ return m_criticality; }

    /**
     * <p> The level of importance that is assigned to the resources that are
     * associated with a finding. <code>Criticality</code> is scored on a 0–100 basis,
     * using a ratio scale that supports only full integers. A score of <code>0</code>
     * means that the underlying resources have no criticality, and a score of
     * <code>100</code> is reserved for the most critical resources. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/securityhub/latest/userguide/asff-top-level-attributes.html#asff-criticality">Criticality</a>
     * in the <i>Security Hub User Guide</i>.</p> <p> Array Members: Minimum number of
     * 1 item. Maximum number of 20 items. </p>
     */
    inline bool CriticalityHasBeenSet() const { return m_criticalityHasBeenSet; }

    /**
     * <p> The level of importance that is assigned to the resources that are
     * associated with a finding. <code>Criticality</code> is scored on a 0–100 basis,
     * using a ratio scale that supports only full integers. A score of <code>0</code>
     * means that the underlying resources have no criticality, and a score of
     * <code>100</code> is reserved for the most critical resources. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/securityhub/latest/userguide/asff-top-level-attributes.html#asff-criticality">Criticality</a>
     * in the <i>Security Hub User Guide</i>.</p> <p> Array Members: Minimum number of
     * 1 item. Maximum number of 20 items. </p>
     */
    inline void SetCriticality(const Aws::Vector<NumberFilter>& value) { m_criticalityHasBeenSet = true; m_criticality = value; }

    /**
     * <p> The level of importance that is assigned to the resources that are
     * associated with a finding. <code>Criticality</code> is scored on a 0–100 basis,
     * using a ratio scale that supports only full integers. A score of <code>0</code>
     * means that the underlying resources have no criticality, and a score of
     * <code>100</code> is reserved for the most critical resources. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/securityhub/latest/userguide/asff-top-level-attributes.html#asff-criticality">Criticality</a>
     * in the <i>Security Hub User Guide</i>.</p> <p> Array Members: Minimum number of
     * 1 item. Maximum number of 20 items. </p>
     */
    inline void SetCriticality(Aws::Vector<NumberFilter>&& value) { m_criticalityHasBeenSet = true; m_criticality = std::move(value); }

    /**
     * <p> The level of importance that is assigned to the resources that are
     * associated with a finding. <code>Criticality</code> is scored on a 0–100 basis,
     * using a ratio scale that supports only full integers. A score of <code>0</code>
     * means that the underlying resources have no criticality, and a score of
     * <code>100</code> is reserved for the most critical resources. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/securityhub/latest/userguide/asff-top-level-attributes.html#asff-criticality">Criticality</a>
     * in the <i>Security Hub User Guide</i>.</p> <p> Array Members: Minimum number of
     * 1 item. Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& WithCriticality(const Aws::Vector<NumberFilter>& value) { SetCriticality(value); return *this;}

    /**
     * <p> The level of importance that is assigned to the resources that are
     * associated with a finding. <code>Criticality</code> is scored on a 0–100 basis,
     * using a ratio scale that supports only full integers. A score of <code>0</code>
     * means that the underlying resources have no criticality, and a score of
     * <code>100</code> is reserved for the most critical resources. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/securityhub/latest/userguide/asff-top-level-attributes.html#asff-criticality">Criticality</a>
     * in the <i>Security Hub User Guide</i>.</p> <p> Array Members: Minimum number of
     * 1 item. Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& WithCriticality(Aws::Vector<NumberFilter>&& value) { SetCriticality(std::move(value)); return *this;}

    /**
     * <p> The level of importance that is assigned to the resources that are
     * associated with a finding. <code>Criticality</code> is scored on a 0–100 basis,
     * using a ratio scale that supports only full integers. A score of <code>0</code>
     * means that the underlying resources have no criticality, and a score of
     * <code>100</code> is reserved for the most critical resources. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/securityhub/latest/userguide/asff-top-level-attributes.html#asff-criticality">Criticality</a>
     * in the <i>Security Hub User Guide</i>.</p> <p> Array Members: Minimum number of
     * 1 item. Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& AddCriticality(const NumberFilter& value) { m_criticalityHasBeenSet = true; m_criticality.push_back(value); return *this; }

    /**
     * <p> The level of importance that is assigned to the resources that are
     * associated with a finding. <code>Criticality</code> is scored on a 0–100 basis,
     * using a ratio scale that supports only full integers. A score of <code>0</code>
     * means that the underlying resources have no criticality, and a score of
     * <code>100</code> is reserved for the most critical resources. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/securityhub/latest/userguide/asff-top-level-attributes.html#asff-criticality">Criticality</a>
     * in the <i>Security Hub User Guide</i>.</p> <p> Array Members: Minimum number of
     * 1 item. Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& AddCriticality(NumberFilter&& value) { m_criticalityHasBeenSet = true; m_criticality.push_back(std::move(value)); return *this; }


    /**
     * <p> A finding's title. </p> <p> Array Members: Minimum number of 1 item. Maximum
     * number of 100 items. </p>
     */
    inline const Aws::Vector<StringFilter>& GetTitle() const{ return m_title; }

    /**
     * <p> A finding's title. </p> <p> Array Members: Minimum number of 1 item. Maximum
     * number of 100 items. </p>
     */
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }

    /**
     * <p> A finding's title. </p> <p> Array Members: Minimum number of 1 item. Maximum
     * number of 100 items. </p>
     */
    inline void SetTitle(const Aws::Vector<StringFilter>& value) { m_titleHasBeenSet = true; m_title = value; }

    /**
     * <p> A finding's title. </p> <p> Array Members: Minimum number of 1 item. Maximum
     * number of 100 items. </p>
     */
    inline void SetTitle(Aws::Vector<StringFilter>&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }

    /**
     * <p> A finding's title. </p> <p> Array Members: Minimum number of 1 item. Maximum
     * number of 100 items. </p>
     */
    inline AutomationRulesFindingFilters& WithTitle(const Aws::Vector<StringFilter>& value) { SetTitle(value); return *this;}

    /**
     * <p> A finding's title. </p> <p> Array Members: Minimum number of 1 item. Maximum
     * number of 100 items. </p>
     */
    inline AutomationRulesFindingFilters& WithTitle(Aws::Vector<StringFilter>&& value) { SetTitle(std::move(value)); return *this;}

    /**
     * <p> A finding's title. </p> <p> Array Members: Minimum number of 1 item. Maximum
     * number of 100 items. </p>
     */
    inline AutomationRulesFindingFilters& AddTitle(const StringFilter& value) { m_titleHasBeenSet = true; m_title.push_back(value); return *this; }

    /**
     * <p> A finding's title. </p> <p> Array Members: Minimum number of 1 item. Maximum
     * number of 100 items. </p>
     */
    inline AutomationRulesFindingFilters& AddTitle(StringFilter&& value) { m_titleHasBeenSet = true; m_title.push_back(std::move(value)); return *this; }


    /**
     * <p> A finding's description. </p> <p> Array Members: Minimum number of 1 item.
     * Maximum number of 20 items. </p>
     */
    inline const Aws::Vector<StringFilter>& GetDescription() const{ return m_description; }

    /**
     * <p> A finding's description. </p> <p> Array Members: Minimum number of 1 item.
     * Maximum number of 20 items. </p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p> A finding's description. </p> <p> Array Members: Minimum number of 1 item.
     * Maximum number of 20 items. </p>
     */
    inline void SetDescription(const Aws::Vector<StringFilter>& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p> A finding's description. </p> <p> Array Members: Minimum number of 1 item.
     * Maximum number of 20 items. </p>
     */
    inline void SetDescription(Aws::Vector<StringFilter>&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p> A finding's description. </p> <p> Array Members: Minimum number of 1 item.
     * Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& WithDescription(const Aws::Vector<StringFilter>& value) { SetDescription(value); return *this;}

    /**
     * <p> A finding's description. </p> <p> Array Members: Minimum number of 1 item.
     * Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& WithDescription(Aws::Vector<StringFilter>&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p> A finding's description. </p> <p> Array Members: Minimum number of 1 item.
     * Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& AddDescription(const StringFilter& value) { m_descriptionHasBeenSet = true; m_description.push_back(value); return *this; }

    /**
     * <p> A finding's description. </p> <p> Array Members: Minimum number of 1 item.
     * Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& AddDescription(StringFilter&& value) { m_descriptionHasBeenSet = true; m_description.push_back(std::move(value)); return *this; }


    /**
     * <p> Provides a URL that links to a page about the current finding in the finding
     * product. </p> <p> Array Members: Minimum number of 1 item. Maximum number of 20
     * items. </p>
     */
    inline const Aws::Vector<StringFilter>& GetSourceUrl() const{ return m_sourceUrl; }

    /**
     * <p> Provides a URL that links to a page about the current finding in the finding
     * product. </p> <p> Array Members: Minimum number of 1 item. Maximum number of 20
     * items. </p>
     */
    inline bool SourceUrlHasBeenSet() const { return m_sourceUrlHasBeenSet; }

    /**
     * <p> Provides a URL that links to a page about the current finding in the finding
     * product. </p> <p> Array Members: Minimum number of 1 item. Maximum number of 20
     * items. </p>
     */
    inline void SetSourceUrl(const Aws::Vector<StringFilter>& value) { m_sourceUrlHasBeenSet = true; m_sourceUrl = value; }

    /**
     * <p> Provides a URL that links to a page about the current finding in the finding
     * product. </p> <p> Array Members: Minimum number of 1 item. Maximum number of 20
     * items. </p>
     */
    inline void SetSourceUrl(Aws::Vector<StringFilter>&& value) { m_sourceUrlHasBeenSet = true; m_sourceUrl = std::move(value); }

    /**
     * <p> Provides a URL that links to a page about the current finding in the finding
     * product. </p> <p> Array Members: Minimum number of 1 item. Maximum number of 20
     * items. </p>
     */
    inline AutomationRulesFindingFilters& WithSourceUrl(const Aws::Vector<StringFilter>& value) { SetSourceUrl(value); return *this;}

    /**
     * <p> Provides a URL that links to a page about the current finding in the finding
     * product. </p> <p> Array Members: Minimum number of 1 item. Maximum number of 20
     * items. </p>
     */
    inline AutomationRulesFindingFilters& WithSourceUrl(Aws::Vector<StringFilter>&& value) { SetSourceUrl(std::move(value)); return *this;}

    /**
     * <p> Provides a URL that links to a page about the current finding in the finding
     * product. </p> <p> Array Members: Minimum number of 1 item. Maximum number of 20
     * items. </p>
     */
    inline AutomationRulesFindingFilters& AddSourceUrl(const StringFilter& value) { m_sourceUrlHasBeenSet = true; m_sourceUrl.push_back(value); return *this; }

    /**
     * <p> Provides a URL that links to a page about the current finding in the finding
     * product. </p> <p> Array Members: Minimum number of 1 item. Maximum number of 20
     * items. </p>
     */
    inline AutomationRulesFindingFilters& AddSourceUrl(StringFilter&& value) { m_sourceUrlHasBeenSet = true; m_sourceUrl.push_back(std::move(value)); return *this; }


    /**
     * <p> Provides the name of the product that generated the finding. For
     * control-based findings, the product name is Security Hub. </p> <p> Array
     * Members: Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline const Aws::Vector<StringFilter>& GetProductName() const{ return m_productName; }

    /**
     * <p> Provides the name of the product that generated the finding. For
     * control-based findings, the product name is Security Hub. </p> <p> Array
     * Members: Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline bool ProductNameHasBeenSet() const { return m_productNameHasBeenSet; }

    /**
     * <p> Provides the name of the product that generated the finding. For
     * control-based findings, the product name is Security Hub. </p> <p> Array
     * Members: Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline void SetProductName(const Aws::Vector<StringFilter>& value) { m_productNameHasBeenSet = true; m_productName = value; }

    /**
     * <p> Provides the name of the product that generated the finding. For
     * control-based findings, the product name is Security Hub. </p> <p> Array
     * Members: Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline void SetProductName(Aws::Vector<StringFilter>&& value) { m_productNameHasBeenSet = true; m_productName = std::move(value); }

    /**
     * <p> Provides the name of the product that generated the finding. For
     * control-based findings, the product name is Security Hub. </p> <p> Array
     * Members: Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& WithProductName(const Aws::Vector<StringFilter>& value) { SetProductName(value); return *this;}

    /**
     * <p> Provides the name of the product that generated the finding. For
     * control-based findings, the product name is Security Hub. </p> <p> Array
     * Members: Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& WithProductName(Aws::Vector<StringFilter>&& value) { SetProductName(std::move(value)); return *this;}

    /**
     * <p> Provides the name of the product that generated the finding. For
     * control-based findings, the product name is Security Hub. </p> <p> Array
     * Members: Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& AddProductName(const StringFilter& value) { m_productNameHasBeenSet = true; m_productName.push_back(value); return *this; }

    /**
     * <p> Provides the name of the product that generated the finding. For
     * control-based findings, the product name is Security Hub. </p> <p> Array
     * Members: Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& AddProductName(StringFilter&& value) { m_productNameHasBeenSet = true; m_productName.push_back(std::move(value)); return *this; }


    /**
     * <p> The name of the company for the product that generated the finding. For
     * control-based findings, the company is Amazon Web Services. </p> <p> Array
     * Members: Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline const Aws::Vector<StringFilter>& GetCompanyName() const{ return m_companyName; }

    /**
     * <p> The name of the company for the product that generated the finding. For
     * control-based findings, the company is Amazon Web Services. </p> <p> Array
     * Members: Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline bool CompanyNameHasBeenSet() const { return m_companyNameHasBeenSet; }

    /**
     * <p> The name of the company for the product that generated the finding. For
     * control-based findings, the company is Amazon Web Services. </p> <p> Array
     * Members: Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline void SetCompanyName(const Aws::Vector<StringFilter>& value) { m_companyNameHasBeenSet = true; m_companyName = value; }

    /**
     * <p> The name of the company for the product that generated the finding. For
     * control-based findings, the company is Amazon Web Services. </p> <p> Array
     * Members: Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline void SetCompanyName(Aws::Vector<StringFilter>&& value) { m_companyNameHasBeenSet = true; m_companyName = std::move(value); }

    /**
     * <p> The name of the company for the product that generated the finding. For
     * control-based findings, the company is Amazon Web Services. </p> <p> Array
     * Members: Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& WithCompanyName(const Aws::Vector<StringFilter>& value) { SetCompanyName(value); return *this;}

    /**
     * <p> The name of the company for the product that generated the finding. For
     * control-based findings, the company is Amazon Web Services. </p> <p> Array
     * Members: Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& WithCompanyName(Aws::Vector<StringFilter>&& value) { SetCompanyName(std::move(value)); return *this;}

    /**
     * <p> The name of the company for the product that generated the finding. For
     * control-based findings, the company is Amazon Web Services. </p> <p> Array
     * Members: Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& AddCompanyName(const StringFilter& value) { m_companyNameHasBeenSet = true; m_companyName.push_back(value); return *this; }

    /**
     * <p> The name of the company for the product that generated the finding. For
     * control-based findings, the company is Amazon Web Services. </p> <p> Array
     * Members: Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& AddCompanyName(StringFilter&& value) { m_companyNameHasBeenSet = true; m_companyName.push_back(std::move(value)); return *this; }


    /**
     * <p> The severity value of the finding. </p> <p> Array Members: Minimum number of
     * 1 item. Maximum number of 20 items. </p>
     */
    inline const Aws::Vector<StringFilter>& GetSeverityLabel() const{ return m_severityLabel; }

    /**
     * <p> The severity value of the finding. </p> <p> Array Members: Minimum number of
     * 1 item. Maximum number of 20 items. </p>
     */
    inline bool SeverityLabelHasBeenSet() const { return m_severityLabelHasBeenSet; }

    /**
     * <p> The severity value of the finding. </p> <p> Array Members: Minimum number of
     * 1 item. Maximum number of 20 items. </p>
     */
    inline void SetSeverityLabel(const Aws::Vector<StringFilter>& value) { m_severityLabelHasBeenSet = true; m_severityLabel = value; }

    /**
     * <p> The severity value of the finding. </p> <p> Array Members: Minimum number of
     * 1 item. Maximum number of 20 items. </p>
     */
    inline void SetSeverityLabel(Aws::Vector<StringFilter>&& value) { m_severityLabelHasBeenSet = true; m_severityLabel = std::move(value); }

    /**
     * <p> The severity value of the finding. </p> <p> Array Members: Minimum number of
     * 1 item. Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& WithSeverityLabel(const Aws::Vector<StringFilter>& value) { SetSeverityLabel(value); return *this;}

    /**
     * <p> The severity value of the finding. </p> <p> Array Members: Minimum number of
     * 1 item. Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& WithSeverityLabel(Aws::Vector<StringFilter>&& value) { SetSeverityLabel(std::move(value)); return *this;}

    /**
     * <p> The severity value of the finding. </p> <p> Array Members: Minimum number of
     * 1 item. Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& AddSeverityLabel(const StringFilter& value) { m_severityLabelHasBeenSet = true; m_severityLabel.push_back(value); return *this; }

    /**
     * <p> The severity value of the finding. </p> <p> Array Members: Minimum number of
     * 1 item. Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& AddSeverityLabel(StringFilter&& value) { m_severityLabelHasBeenSet = true; m_severityLabel.push_back(std::move(value)); return *this; }


    /**
     * <p> The type of resource that the finding pertains to. </p> <p> Array Members:
     * Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline const Aws::Vector<StringFilter>& GetResourceType() const{ return m_resourceType; }

    /**
     * <p> The type of resource that the finding pertains to. </p> <p> Array Members:
     * Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p> The type of resource that the finding pertains to. </p> <p> Array Members:
     * Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline void SetResourceType(const Aws::Vector<StringFilter>& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p> The type of resource that the finding pertains to. </p> <p> Array Members:
     * Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline void SetResourceType(Aws::Vector<StringFilter>&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p> The type of resource that the finding pertains to. </p> <p> Array Members:
     * Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& WithResourceType(const Aws::Vector<StringFilter>& value) { SetResourceType(value); return *this;}

    /**
     * <p> The type of resource that the finding pertains to. </p> <p> Array Members:
     * Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& WithResourceType(Aws::Vector<StringFilter>&& value) { SetResourceType(std::move(value)); return *this;}

    /**
     * <p> The type of resource that the finding pertains to. </p> <p> Array Members:
     * Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& AddResourceType(const StringFilter& value) { m_resourceTypeHasBeenSet = true; m_resourceType.push_back(value); return *this; }

    /**
     * <p> The type of resource that the finding pertains to. </p> <p> Array Members:
     * Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& AddResourceType(StringFilter&& value) { m_resourceTypeHasBeenSet = true; m_resourceType.push_back(std::move(value)); return *this; }


    /**
     * <p> The identifier for the given resource type. For Amazon Web Services
     * resources that are identified by Amazon Resource Names (ARNs), this is the ARN.
     * For Amazon Web Services resources that lack ARNs, this is the identifier as
     * defined by the Amazon Web Service that created the resource. For non-Amazon Web
     * Services resources, this is a unique identifier that is associated with the
     * resource. </p> <p> Array Members: Minimum number of 1 item. Maximum number of
     * 100 items. </p>
     */
    inline const Aws::Vector<StringFilter>& GetResourceId() const{ return m_resourceId; }

    /**
     * <p> The identifier for the given resource type. For Amazon Web Services
     * resources that are identified by Amazon Resource Names (ARNs), this is the ARN.
     * For Amazon Web Services resources that lack ARNs, this is the identifier as
     * defined by the Amazon Web Service that created the resource. For non-Amazon Web
     * Services resources, this is a unique identifier that is associated with the
     * resource. </p> <p> Array Members: Minimum number of 1 item. Maximum number of
     * 100 items. </p>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p> The identifier for the given resource type. For Amazon Web Services
     * resources that are identified by Amazon Resource Names (ARNs), this is the ARN.
     * For Amazon Web Services resources that lack ARNs, this is the identifier as
     * defined by the Amazon Web Service that created the resource. For non-Amazon Web
     * Services resources, this is a unique identifier that is associated with the
     * resource. </p> <p> Array Members: Minimum number of 1 item. Maximum number of
     * 100 items. </p>
     */
    inline void SetResourceId(const Aws::Vector<StringFilter>& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p> The identifier for the given resource type. For Amazon Web Services
     * resources that are identified by Amazon Resource Names (ARNs), this is the ARN.
     * For Amazon Web Services resources that lack ARNs, this is the identifier as
     * defined by the Amazon Web Service that created the resource. For non-Amazon Web
     * Services resources, this is a unique identifier that is associated with the
     * resource. </p> <p> Array Members: Minimum number of 1 item. Maximum number of
     * 100 items. </p>
     */
    inline void SetResourceId(Aws::Vector<StringFilter>&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p> The identifier for the given resource type. For Amazon Web Services
     * resources that are identified by Amazon Resource Names (ARNs), this is the ARN.
     * For Amazon Web Services resources that lack ARNs, this is the identifier as
     * defined by the Amazon Web Service that created the resource. For non-Amazon Web
     * Services resources, this is a unique identifier that is associated with the
     * resource. </p> <p> Array Members: Minimum number of 1 item. Maximum number of
     * 100 items. </p>
     */
    inline AutomationRulesFindingFilters& WithResourceId(const Aws::Vector<StringFilter>& value) { SetResourceId(value); return *this;}

    /**
     * <p> The identifier for the given resource type. For Amazon Web Services
     * resources that are identified by Amazon Resource Names (ARNs), this is the ARN.
     * For Amazon Web Services resources that lack ARNs, this is the identifier as
     * defined by the Amazon Web Service that created the resource. For non-Amazon Web
     * Services resources, this is a unique identifier that is associated with the
     * resource. </p> <p> Array Members: Minimum number of 1 item. Maximum number of
     * 100 items. </p>
     */
    inline AutomationRulesFindingFilters& WithResourceId(Aws::Vector<StringFilter>&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p> The identifier for the given resource type. For Amazon Web Services
     * resources that are identified by Amazon Resource Names (ARNs), this is the ARN.
     * For Amazon Web Services resources that lack ARNs, this is the identifier as
     * defined by the Amazon Web Service that created the resource. For non-Amazon Web
     * Services resources, this is a unique identifier that is associated with the
     * resource. </p> <p> Array Members: Minimum number of 1 item. Maximum number of
     * 100 items. </p>
     */
    inline AutomationRulesFindingFilters& AddResourceId(const StringFilter& value) { m_resourceIdHasBeenSet = true; m_resourceId.push_back(value); return *this; }

    /**
     * <p> The identifier for the given resource type. For Amazon Web Services
     * resources that are identified by Amazon Resource Names (ARNs), this is the ARN.
     * For Amazon Web Services resources that lack ARNs, this is the identifier as
     * defined by the Amazon Web Service that created the resource. For non-Amazon Web
     * Services resources, this is a unique identifier that is associated with the
     * resource. </p> <p> Array Members: Minimum number of 1 item. Maximum number of
     * 100 items. </p>
     */
    inline AutomationRulesFindingFilters& AddResourceId(StringFilter&& value) { m_resourceIdHasBeenSet = true; m_resourceId.push_back(std::move(value)); return *this; }


    /**
     * <p> The partition in which the resource that the finding pertains to is located.
     * A partition is a group of Amazon Web Services Regions. Each Amazon Web Services
     * account is scoped to one partition. </p> <p> Array Members: Minimum number of 1
     * item. Maximum number of 20 items. </p>
     */
    inline const Aws::Vector<StringFilter>& GetResourcePartition() const{ return m_resourcePartition; }

    /**
     * <p> The partition in which the resource that the finding pertains to is located.
     * A partition is a group of Amazon Web Services Regions. Each Amazon Web Services
     * account is scoped to one partition. </p> <p> Array Members: Minimum number of 1
     * item. Maximum number of 20 items. </p>
     */
    inline bool ResourcePartitionHasBeenSet() const { return m_resourcePartitionHasBeenSet; }

    /**
     * <p> The partition in which the resource that the finding pertains to is located.
     * A partition is a group of Amazon Web Services Regions. Each Amazon Web Services
     * account is scoped to one partition. </p> <p> Array Members: Minimum number of 1
     * item. Maximum number of 20 items. </p>
     */
    inline void SetResourcePartition(const Aws::Vector<StringFilter>& value) { m_resourcePartitionHasBeenSet = true; m_resourcePartition = value; }

    /**
     * <p> The partition in which the resource that the finding pertains to is located.
     * A partition is a group of Amazon Web Services Regions. Each Amazon Web Services
     * account is scoped to one partition. </p> <p> Array Members: Minimum number of 1
     * item. Maximum number of 20 items. </p>
     */
    inline void SetResourcePartition(Aws::Vector<StringFilter>&& value) { m_resourcePartitionHasBeenSet = true; m_resourcePartition = std::move(value); }

    /**
     * <p> The partition in which the resource that the finding pertains to is located.
     * A partition is a group of Amazon Web Services Regions. Each Amazon Web Services
     * account is scoped to one partition. </p> <p> Array Members: Minimum number of 1
     * item. Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& WithResourcePartition(const Aws::Vector<StringFilter>& value) { SetResourcePartition(value); return *this;}

    /**
     * <p> The partition in which the resource that the finding pertains to is located.
     * A partition is a group of Amazon Web Services Regions. Each Amazon Web Services
     * account is scoped to one partition. </p> <p> Array Members: Minimum number of 1
     * item. Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& WithResourcePartition(Aws::Vector<StringFilter>&& value) { SetResourcePartition(std::move(value)); return *this;}

    /**
     * <p> The partition in which the resource that the finding pertains to is located.
     * A partition is a group of Amazon Web Services Regions. Each Amazon Web Services
     * account is scoped to one partition. </p> <p> Array Members: Minimum number of 1
     * item. Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& AddResourcePartition(const StringFilter& value) { m_resourcePartitionHasBeenSet = true; m_resourcePartition.push_back(value); return *this; }

    /**
     * <p> The partition in which the resource that the finding pertains to is located.
     * A partition is a group of Amazon Web Services Regions. Each Amazon Web Services
     * account is scoped to one partition. </p> <p> Array Members: Minimum number of 1
     * item. Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& AddResourcePartition(StringFilter&& value) { m_resourcePartitionHasBeenSet = true; m_resourcePartition.push_back(std::move(value)); return *this; }


    /**
     * <p> The Amazon Web Services Region where the resource that a finding pertains to
     * is located. </p> <p> Array Members: Minimum number of 1 item. Maximum number of
     * 20 items. </p>
     */
    inline const Aws::Vector<StringFilter>& GetResourceRegion() const{ return m_resourceRegion; }

    /**
     * <p> The Amazon Web Services Region where the resource that a finding pertains to
     * is located. </p> <p> Array Members: Minimum number of 1 item. Maximum number of
     * 20 items. </p>
     */
    inline bool ResourceRegionHasBeenSet() const { return m_resourceRegionHasBeenSet; }

    /**
     * <p> The Amazon Web Services Region where the resource that a finding pertains to
     * is located. </p> <p> Array Members: Minimum number of 1 item. Maximum number of
     * 20 items. </p>
     */
    inline void SetResourceRegion(const Aws::Vector<StringFilter>& value) { m_resourceRegionHasBeenSet = true; m_resourceRegion = value; }

    /**
     * <p> The Amazon Web Services Region where the resource that a finding pertains to
     * is located. </p> <p> Array Members: Minimum number of 1 item. Maximum number of
     * 20 items. </p>
     */
    inline void SetResourceRegion(Aws::Vector<StringFilter>&& value) { m_resourceRegionHasBeenSet = true; m_resourceRegion = std::move(value); }

    /**
     * <p> The Amazon Web Services Region where the resource that a finding pertains to
     * is located. </p> <p> Array Members: Minimum number of 1 item. Maximum number of
     * 20 items. </p>
     */
    inline AutomationRulesFindingFilters& WithResourceRegion(const Aws::Vector<StringFilter>& value) { SetResourceRegion(value); return *this;}

    /**
     * <p> The Amazon Web Services Region where the resource that a finding pertains to
     * is located. </p> <p> Array Members: Minimum number of 1 item. Maximum number of
     * 20 items. </p>
     */
    inline AutomationRulesFindingFilters& WithResourceRegion(Aws::Vector<StringFilter>&& value) { SetResourceRegion(std::move(value)); return *this;}

    /**
     * <p> The Amazon Web Services Region where the resource that a finding pertains to
     * is located. </p> <p> Array Members: Minimum number of 1 item. Maximum number of
     * 20 items. </p>
     */
    inline AutomationRulesFindingFilters& AddResourceRegion(const StringFilter& value) { m_resourceRegionHasBeenSet = true; m_resourceRegion.push_back(value); return *this; }

    /**
     * <p> The Amazon Web Services Region where the resource that a finding pertains to
     * is located. </p> <p> Array Members: Minimum number of 1 item. Maximum number of
     * 20 items. </p>
     */
    inline AutomationRulesFindingFilters& AddResourceRegion(StringFilter&& value) { m_resourceRegionHasBeenSet = true; m_resourceRegion.push_back(std::move(value)); return *this; }


    /**
     * <p> A list of Amazon Web Services tags associated with a resource at the time
     * the finding was processed. </p> <p> Array Members: Minimum number of 1 item.
     * Maximum number of 20 items. </p>
     */
    inline const Aws::Vector<MapFilter>& GetResourceTags() const{ return m_resourceTags; }

    /**
     * <p> A list of Amazon Web Services tags associated with a resource at the time
     * the finding was processed. </p> <p> Array Members: Minimum number of 1 item.
     * Maximum number of 20 items. </p>
     */
    inline bool ResourceTagsHasBeenSet() const { return m_resourceTagsHasBeenSet; }

    /**
     * <p> A list of Amazon Web Services tags associated with a resource at the time
     * the finding was processed. </p> <p> Array Members: Minimum number of 1 item.
     * Maximum number of 20 items. </p>
     */
    inline void SetResourceTags(const Aws::Vector<MapFilter>& value) { m_resourceTagsHasBeenSet = true; m_resourceTags = value; }

    /**
     * <p> A list of Amazon Web Services tags associated with a resource at the time
     * the finding was processed. </p> <p> Array Members: Minimum number of 1 item.
     * Maximum number of 20 items. </p>
     */
    inline void SetResourceTags(Aws::Vector<MapFilter>&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags = std::move(value); }

    /**
     * <p> A list of Amazon Web Services tags associated with a resource at the time
     * the finding was processed. </p> <p> Array Members: Minimum number of 1 item.
     * Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& WithResourceTags(const Aws::Vector<MapFilter>& value) { SetResourceTags(value); return *this;}

    /**
     * <p> A list of Amazon Web Services tags associated with a resource at the time
     * the finding was processed. </p> <p> Array Members: Minimum number of 1 item.
     * Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& WithResourceTags(Aws::Vector<MapFilter>&& value) { SetResourceTags(std::move(value)); return *this;}

    /**
     * <p> A list of Amazon Web Services tags associated with a resource at the time
     * the finding was processed. </p> <p> Array Members: Minimum number of 1 item.
     * Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& AddResourceTags(const MapFilter& value) { m_resourceTagsHasBeenSet = true; m_resourceTags.push_back(value); return *this; }

    /**
     * <p> A list of Amazon Web Services tags associated with a resource at the time
     * the finding was processed. </p> <p> Array Members: Minimum number of 1 item.
     * Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& AddResourceTags(MapFilter&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags.push_back(std::move(value)); return *this; }


    /**
     * <p> Custom fields and values about the resource that a finding pertains to. </p>
     * <p> Array Members: Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline const Aws::Vector<MapFilter>& GetResourceDetailsOther() const{ return m_resourceDetailsOther; }

    /**
     * <p> Custom fields and values about the resource that a finding pertains to. </p>
     * <p> Array Members: Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline bool ResourceDetailsOtherHasBeenSet() const { return m_resourceDetailsOtherHasBeenSet; }

    /**
     * <p> Custom fields and values about the resource that a finding pertains to. </p>
     * <p> Array Members: Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline void SetResourceDetailsOther(const Aws::Vector<MapFilter>& value) { m_resourceDetailsOtherHasBeenSet = true; m_resourceDetailsOther = value; }

    /**
     * <p> Custom fields and values about the resource that a finding pertains to. </p>
     * <p> Array Members: Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline void SetResourceDetailsOther(Aws::Vector<MapFilter>&& value) { m_resourceDetailsOtherHasBeenSet = true; m_resourceDetailsOther = std::move(value); }

    /**
     * <p> Custom fields and values about the resource that a finding pertains to. </p>
     * <p> Array Members: Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& WithResourceDetailsOther(const Aws::Vector<MapFilter>& value) { SetResourceDetailsOther(value); return *this;}

    /**
     * <p> Custom fields and values about the resource that a finding pertains to. </p>
     * <p> Array Members: Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& WithResourceDetailsOther(Aws::Vector<MapFilter>&& value) { SetResourceDetailsOther(std::move(value)); return *this;}

    /**
     * <p> Custom fields and values about the resource that a finding pertains to. </p>
     * <p> Array Members: Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& AddResourceDetailsOther(const MapFilter& value) { m_resourceDetailsOtherHasBeenSet = true; m_resourceDetailsOther.push_back(value); return *this; }

    /**
     * <p> Custom fields and values about the resource that a finding pertains to. </p>
     * <p> Array Members: Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& AddResourceDetailsOther(MapFilter&& value) { m_resourceDetailsOtherHasBeenSet = true; m_resourceDetailsOther.push_back(std::move(value)); return *this; }


    /**
     * <p> The result of a security check. This field is only used for findings
     * generated from controls. </p> <p> Array Members: Minimum number of 1 item.
     * Maximum number of 20 items. </p>
     */
    inline const Aws::Vector<StringFilter>& GetComplianceStatus() const{ return m_complianceStatus; }

    /**
     * <p> The result of a security check. This field is only used for findings
     * generated from controls. </p> <p> Array Members: Minimum number of 1 item.
     * Maximum number of 20 items. </p>
     */
    inline bool ComplianceStatusHasBeenSet() const { return m_complianceStatusHasBeenSet; }

    /**
     * <p> The result of a security check. This field is only used for findings
     * generated from controls. </p> <p> Array Members: Minimum number of 1 item.
     * Maximum number of 20 items. </p>
     */
    inline void SetComplianceStatus(const Aws::Vector<StringFilter>& value) { m_complianceStatusHasBeenSet = true; m_complianceStatus = value; }

    /**
     * <p> The result of a security check. This field is only used for findings
     * generated from controls. </p> <p> Array Members: Minimum number of 1 item.
     * Maximum number of 20 items. </p>
     */
    inline void SetComplianceStatus(Aws::Vector<StringFilter>&& value) { m_complianceStatusHasBeenSet = true; m_complianceStatus = std::move(value); }

    /**
     * <p> The result of a security check. This field is only used for findings
     * generated from controls. </p> <p> Array Members: Minimum number of 1 item.
     * Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& WithComplianceStatus(const Aws::Vector<StringFilter>& value) { SetComplianceStatus(value); return *this;}

    /**
     * <p> The result of a security check. This field is only used for findings
     * generated from controls. </p> <p> Array Members: Minimum number of 1 item.
     * Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& WithComplianceStatus(Aws::Vector<StringFilter>&& value) { SetComplianceStatus(std::move(value)); return *this;}

    /**
     * <p> The result of a security check. This field is only used for findings
     * generated from controls. </p> <p> Array Members: Minimum number of 1 item.
     * Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& AddComplianceStatus(const StringFilter& value) { m_complianceStatusHasBeenSet = true; m_complianceStatus.push_back(value); return *this; }

    /**
     * <p> The result of a security check. This field is only used for findings
     * generated from controls. </p> <p> Array Members: Minimum number of 1 item.
     * Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& AddComplianceStatus(StringFilter&& value) { m_complianceStatusHasBeenSet = true; m_complianceStatus.push_back(std::move(value)); return *this; }


    /**
     * <p> The security control ID for which a finding was generated. Security control
     * IDs are the same across standards.</p> <p> Array Members: Minimum number of 1
     * item. Maximum number of 20 items. </p>
     */
    inline const Aws::Vector<StringFilter>& GetComplianceSecurityControlId() const{ return m_complianceSecurityControlId; }

    /**
     * <p> The security control ID for which a finding was generated. Security control
     * IDs are the same across standards.</p> <p> Array Members: Minimum number of 1
     * item. Maximum number of 20 items. </p>
     */
    inline bool ComplianceSecurityControlIdHasBeenSet() const { return m_complianceSecurityControlIdHasBeenSet; }

    /**
     * <p> The security control ID for which a finding was generated. Security control
     * IDs are the same across standards.</p> <p> Array Members: Minimum number of 1
     * item. Maximum number of 20 items. </p>
     */
    inline void SetComplianceSecurityControlId(const Aws::Vector<StringFilter>& value) { m_complianceSecurityControlIdHasBeenSet = true; m_complianceSecurityControlId = value; }

    /**
     * <p> The security control ID for which a finding was generated. Security control
     * IDs are the same across standards.</p> <p> Array Members: Minimum number of 1
     * item. Maximum number of 20 items. </p>
     */
    inline void SetComplianceSecurityControlId(Aws::Vector<StringFilter>&& value) { m_complianceSecurityControlIdHasBeenSet = true; m_complianceSecurityControlId = std::move(value); }

    /**
     * <p> The security control ID for which a finding was generated. Security control
     * IDs are the same across standards.</p> <p> Array Members: Minimum number of 1
     * item. Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& WithComplianceSecurityControlId(const Aws::Vector<StringFilter>& value) { SetComplianceSecurityControlId(value); return *this;}

    /**
     * <p> The security control ID for which a finding was generated. Security control
     * IDs are the same across standards.</p> <p> Array Members: Minimum number of 1
     * item. Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& WithComplianceSecurityControlId(Aws::Vector<StringFilter>&& value) { SetComplianceSecurityControlId(std::move(value)); return *this;}

    /**
     * <p> The security control ID for which a finding was generated. Security control
     * IDs are the same across standards.</p> <p> Array Members: Minimum number of 1
     * item. Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& AddComplianceSecurityControlId(const StringFilter& value) { m_complianceSecurityControlIdHasBeenSet = true; m_complianceSecurityControlId.push_back(value); return *this; }

    /**
     * <p> The security control ID for which a finding was generated. Security control
     * IDs are the same across standards.</p> <p> Array Members: Minimum number of 1
     * item. Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& AddComplianceSecurityControlId(StringFilter&& value) { m_complianceSecurityControlIdHasBeenSet = true; m_complianceSecurityControlId.push_back(std::move(value)); return *this; }


    /**
     * <p>The unique identifier of a standard in which a control is enabled. This field
     * consists of the resource portion of the Amazon Resource Name (ARN) returned for
     * a standard in the <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_DescribeStandards.html">DescribeStandards</a>
     * API response.</p> <p> Array Members: Minimum number of 1 item. Maximum number of
     * 20 items. </p>
     */
    inline const Aws::Vector<StringFilter>& GetComplianceAssociatedStandardsId() const{ return m_complianceAssociatedStandardsId; }

    /**
     * <p>The unique identifier of a standard in which a control is enabled. This field
     * consists of the resource portion of the Amazon Resource Name (ARN) returned for
     * a standard in the <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_DescribeStandards.html">DescribeStandards</a>
     * API response.</p> <p> Array Members: Minimum number of 1 item. Maximum number of
     * 20 items. </p>
     */
    inline bool ComplianceAssociatedStandardsIdHasBeenSet() const { return m_complianceAssociatedStandardsIdHasBeenSet; }

    /**
     * <p>The unique identifier of a standard in which a control is enabled. This field
     * consists of the resource portion of the Amazon Resource Name (ARN) returned for
     * a standard in the <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_DescribeStandards.html">DescribeStandards</a>
     * API response.</p> <p> Array Members: Minimum number of 1 item. Maximum number of
     * 20 items. </p>
     */
    inline void SetComplianceAssociatedStandardsId(const Aws::Vector<StringFilter>& value) { m_complianceAssociatedStandardsIdHasBeenSet = true; m_complianceAssociatedStandardsId = value; }

    /**
     * <p>The unique identifier of a standard in which a control is enabled. This field
     * consists of the resource portion of the Amazon Resource Name (ARN) returned for
     * a standard in the <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_DescribeStandards.html">DescribeStandards</a>
     * API response.</p> <p> Array Members: Minimum number of 1 item. Maximum number of
     * 20 items. </p>
     */
    inline void SetComplianceAssociatedStandardsId(Aws::Vector<StringFilter>&& value) { m_complianceAssociatedStandardsIdHasBeenSet = true; m_complianceAssociatedStandardsId = std::move(value); }

    /**
     * <p>The unique identifier of a standard in which a control is enabled. This field
     * consists of the resource portion of the Amazon Resource Name (ARN) returned for
     * a standard in the <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_DescribeStandards.html">DescribeStandards</a>
     * API response.</p> <p> Array Members: Minimum number of 1 item. Maximum number of
     * 20 items. </p>
     */
    inline AutomationRulesFindingFilters& WithComplianceAssociatedStandardsId(const Aws::Vector<StringFilter>& value) { SetComplianceAssociatedStandardsId(value); return *this;}

    /**
     * <p>The unique identifier of a standard in which a control is enabled. This field
     * consists of the resource portion of the Amazon Resource Name (ARN) returned for
     * a standard in the <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_DescribeStandards.html">DescribeStandards</a>
     * API response.</p> <p> Array Members: Minimum number of 1 item. Maximum number of
     * 20 items. </p>
     */
    inline AutomationRulesFindingFilters& WithComplianceAssociatedStandardsId(Aws::Vector<StringFilter>&& value) { SetComplianceAssociatedStandardsId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of a standard in which a control is enabled. This field
     * consists of the resource portion of the Amazon Resource Name (ARN) returned for
     * a standard in the <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_DescribeStandards.html">DescribeStandards</a>
     * API response.</p> <p> Array Members: Minimum number of 1 item. Maximum number of
     * 20 items. </p>
     */
    inline AutomationRulesFindingFilters& AddComplianceAssociatedStandardsId(const StringFilter& value) { m_complianceAssociatedStandardsIdHasBeenSet = true; m_complianceAssociatedStandardsId.push_back(value); return *this; }

    /**
     * <p>The unique identifier of a standard in which a control is enabled. This field
     * consists of the resource portion of the Amazon Resource Name (ARN) returned for
     * a standard in the <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_DescribeStandards.html">DescribeStandards</a>
     * API response.</p> <p> Array Members: Minimum number of 1 item. Maximum number of
     * 20 items. </p>
     */
    inline AutomationRulesFindingFilters& AddComplianceAssociatedStandardsId(StringFilter&& value) { m_complianceAssociatedStandardsIdHasBeenSet = true; m_complianceAssociatedStandardsId.push_back(std::move(value)); return *this; }


    /**
     * <p> Provides the veracity of a finding. </p> <p> Array Members: Minimum number
     * of 1 item. Maximum number of 20 items. </p>
     */
    inline const Aws::Vector<StringFilter>& GetVerificationState() const{ return m_verificationState; }

    /**
     * <p> Provides the veracity of a finding. </p> <p> Array Members: Minimum number
     * of 1 item. Maximum number of 20 items. </p>
     */
    inline bool VerificationStateHasBeenSet() const { return m_verificationStateHasBeenSet; }

    /**
     * <p> Provides the veracity of a finding. </p> <p> Array Members: Minimum number
     * of 1 item. Maximum number of 20 items. </p>
     */
    inline void SetVerificationState(const Aws::Vector<StringFilter>& value) { m_verificationStateHasBeenSet = true; m_verificationState = value; }

    /**
     * <p> Provides the veracity of a finding. </p> <p> Array Members: Minimum number
     * of 1 item. Maximum number of 20 items. </p>
     */
    inline void SetVerificationState(Aws::Vector<StringFilter>&& value) { m_verificationStateHasBeenSet = true; m_verificationState = std::move(value); }

    /**
     * <p> Provides the veracity of a finding. </p> <p> Array Members: Minimum number
     * of 1 item. Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& WithVerificationState(const Aws::Vector<StringFilter>& value) { SetVerificationState(value); return *this;}

    /**
     * <p> Provides the veracity of a finding. </p> <p> Array Members: Minimum number
     * of 1 item. Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& WithVerificationState(Aws::Vector<StringFilter>&& value) { SetVerificationState(std::move(value)); return *this;}

    /**
     * <p> Provides the veracity of a finding. </p> <p> Array Members: Minimum number
     * of 1 item. Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& AddVerificationState(const StringFilter& value) { m_verificationStateHasBeenSet = true; m_verificationState.push_back(value); return *this; }

    /**
     * <p> Provides the veracity of a finding. </p> <p> Array Members: Minimum number
     * of 1 item. Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& AddVerificationState(StringFilter&& value) { m_verificationStateHasBeenSet = true; m_verificationState.push_back(std::move(value)); return *this; }


    /**
     * <p> Provides information about the status of the investigation into a finding.
     * </p> <p> Array Members: Minimum number of 1 item. Maximum number of 20 items.
     * </p>
     */
    inline const Aws::Vector<StringFilter>& GetWorkflowStatus() const{ return m_workflowStatus; }

    /**
     * <p> Provides information about the status of the investigation into a finding.
     * </p> <p> Array Members: Minimum number of 1 item. Maximum number of 20 items.
     * </p>
     */
    inline bool WorkflowStatusHasBeenSet() const { return m_workflowStatusHasBeenSet; }

    /**
     * <p> Provides information about the status of the investigation into a finding.
     * </p> <p> Array Members: Minimum number of 1 item. Maximum number of 20 items.
     * </p>
     */
    inline void SetWorkflowStatus(const Aws::Vector<StringFilter>& value) { m_workflowStatusHasBeenSet = true; m_workflowStatus = value; }

    /**
     * <p> Provides information about the status of the investigation into a finding.
     * </p> <p> Array Members: Minimum number of 1 item. Maximum number of 20 items.
     * </p>
     */
    inline void SetWorkflowStatus(Aws::Vector<StringFilter>&& value) { m_workflowStatusHasBeenSet = true; m_workflowStatus = std::move(value); }

    /**
     * <p> Provides information about the status of the investigation into a finding.
     * </p> <p> Array Members: Minimum number of 1 item. Maximum number of 20 items.
     * </p>
     */
    inline AutomationRulesFindingFilters& WithWorkflowStatus(const Aws::Vector<StringFilter>& value) { SetWorkflowStatus(value); return *this;}

    /**
     * <p> Provides information about the status of the investigation into a finding.
     * </p> <p> Array Members: Minimum number of 1 item. Maximum number of 20 items.
     * </p>
     */
    inline AutomationRulesFindingFilters& WithWorkflowStatus(Aws::Vector<StringFilter>&& value) { SetWorkflowStatus(std::move(value)); return *this;}

    /**
     * <p> Provides information about the status of the investigation into a finding.
     * </p> <p> Array Members: Minimum number of 1 item. Maximum number of 20 items.
     * </p>
     */
    inline AutomationRulesFindingFilters& AddWorkflowStatus(const StringFilter& value) { m_workflowStatusHasBeenSet = true; m_workflowStatus.push_back(value); return *this; }

    /**
     * <p> Provides information about the status of the investigation into a finding.
     * </p> <p> Array Members: Minimum number of 1 item. Maximum number of 20 items.
     * </p>
     */
    inline AutomationRulesFindingFilters& AddWorkflowStatus(StringFilter&& value) { m_workflowStatusHasBeenSet = true; m_workflowStatus.push_back(std::move(value)); return *this; }


    /**
     * <p> Provides the current state of a finding. </p> <p> Array Members: Minimum
     * number of 1 item. Maximum number of 20 items. </p>
     */
    inline const Aws::Vector<StringFilter>& GetRecordState() const{ return m_recordState; }

    /**
     * <p> Provides the current state of a finding. </p> <p> Array Members: Minimum
     * number of 1 item. Maximum number of 20 items. </p>
     */
    inline bool RecordStateHasBeenSet() const { return m_recordStateHasBeenSet; }

    /**
     * <p> Provides the current state of a finding. </p> <p> Array Members: Minimum
     * number of 1 item. Maximum number of 20 items. </p>
     */
    inline void SetRecordState(const Aws::Vector<StringFilter>& value) { m_recordStateHasBeenSet = true; m_recordState = value; }

    /**
     * <p> Provides the current state of a finding. </p> <p> Array Members: Minimum
     * number of 1 item. Maximum number of 20 items. </p>
     */
    inline void SetRecordState(Aws::Vector<StringFilter>&& value) { m_recordStateHasBeenSet = true; m_recordState = std::move(value); }

    /**
     * <p> Provides the current state of a finding. </p> <p> Array Members: Minimum
     * number of 1 item. Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& WithRecordState(const Aws::Vector<StringFilter>& value) { SetRecordState(value); return *this;}

    /**
     * <p> Provides the current state of a finding. </p> <p> Array Members: Minimum
     * number of 1 item. Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& WithRecordState(Aws::Vector<StringFilter>&& value) { SetRecordState(std::move(value)); return *this;}

    /**
     * <p> Provides the current state of a finding. </p> <p> Array Members: Minimum
     * number of 1 item. Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& AddRecordState(const StringFilter& value) { m_recordStateHasBeenSet = true; m_recordState.push_back(value); return *this; }

    /**
     * <p> Provides the current state of a finding. </p> <p> Array Members: Minimum
     * number of 1 item. Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& AddRecordState(StringFilter&& value) { m_recordStateHasBeenSet = true; m_recordState.push_back(std::move(value)); return *this; }


    /**
     * <p> The ARN for the product that generated a related finding. </p> <p> Array
     * Members: Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline const Aws::Vector<StringFilter>& GetRelatedFindingsProductArn() const{ return m_relatedFindingsProductArn; }

    /**
     * <p> The ARN for the product that generated a related finding. </p> <p> Array
     * Members: Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline bool RelatedFindingsProductArnHasBeenSet() const { return m_relatedFindingsProductArnHasBeenSet; }

    /**
     * <p> The ARN for the product that generated a related finding. </p> <p> Array
     * Members: Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline void SetRelatedFindingsProductArn(const Aws::Vector<StringFilter>& value) { m_relatedFindingsProductArnHasBeenSet = true; m_relatedFindingsProductArn = value; }

    /**
     * <p> The ARN for the product that generated a related finding. </p> <p> Array
     * Members: Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline void SetRelatedFindingsProductArn(Aws::Vector<StringFilter>&& value) { m_relatedFindingsProductArnHasBeenSet = true; m_relatedFindingsProductArn = std::move(value); }

    /**
     * <p> The ARN for the product that generated a related finding. </p> <p> Array
     * Members: Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& WithRelatedFindingsProductArn(const Aws::Vector<StringFilter>& value) { SetRelatedFindingsProductArn(value); return *this;}

    /**
     * <p> The ARN for the product that generated a related finding. </p> <p> Array
     * Members: Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& WithRelatedFindingsProductArn(Aws::Vector<StringFilter>&& value) { SetRelatedFindingsProductArn(std::move(value)); return *this;}

    /**
     * <p> The ARN for the product that generated a related finding. </p> <p> Array
     * Members: Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& AddRelatedFindingsProductArn(const StringFilter& value) { m_relatedFindingsProductArnHasBeenSet = true; m_relatedFindingsProductArn.push_back(value); return *this; }

    /**
     * <p> The ARN for the product that generated a related finding. </p> <p> Array
     * Members: Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& AddRelatedFindingsProductArn(StringFilter&& value) { m_relatedFindingsProductArnHasBeenSet = true; m_relatedFindingsProductArn.push_back(std::move(value)); return *this; }


    /**
     * <p> The product-generated identifier for a related finding. </p> <p> Array
     * Members: Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline const Aws::Vector<StringFilter>& GetRelatedFindingsId() const{ return m_relatedFindingsId; }

    /**
     * <p> The product-generated identifier for a related finding. </p> <p> Array
     * Members: Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline bool RelatedFindingsIdHasBeenSet() const { return m_relatedFindingsIdHasBeenSet; }

    /**
     * <p> The product-generated identifier for a related finding. </p> <p> Array
     * Members: Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline void SetRelatedFindingsId(const Aws::Vector<StringFilter>& value) { m_relatedFindingsIdHasBeenSet = true; m_relatedFindingsId = value; }

    /**
     * <p> The product-generated identifier for a related finding. </p> <p> Array
     * Members: Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline void SetRelatedFindingsId(Aws::Vector<StringFilter>&& value) { m_relatedFindingsIdHasBeenSet = true; m_relatedFindingsId = std::move(value); }

    /**
     * <p> The product-generated identifier for a related finding. </p> <p> Array
     * Members: Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& WithRelatedFindingsId(const Aws::Vector<StringFilter>& value) { SetRelatedFindingsId(value); return *this;}

    /**
     * <p> The product-generated identifier for a related finding. </p> <p> Array
     * Members: Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& WithRelatedFindingsId(Aws::Vector<StringFilter>&& value) { SetRelatedFindingsId(std::move(value)); return *this;}

    /**
     * <p> The product-generated identifier for a related finding. </p> <p> Array
     * Members: Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& AddRelatedFindingsId(const StringFilter& value) { m_relatedFindingsIdHasBeenSet = true; m_relatedFindingsId.push_back(value); return *this; }

    /**
     * <p> The product-generated identifier for a related finding. </p> <p> Array
     * Members: Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& AddRelatedFindingsId(StringFilter&& value) { m_relatedFindingsIdHasBeenSet = true; m_relatedFindingsId.push_back(std::move(value)); return *this; }


    /**
     * <p> The text of a user-defined note that's added to a finding. </p> <p> Array
     * Members: Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline const Aws::Vector<StringFilter>& GetNoteText() const{ return m_noteText; }

    /**
     * <p> The text of a user-defined note that's added to a finding. </p> <p> Array
     * Members: Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline bool NoteTextHasBeenSet() const { return m_noteTextHasBeenSet; }

    /**
     * <p> The text of a user-defined note that's added to a finding. </p> <p> Array
     * Members: Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline void SetNoteText(const Aws::Vector<StringFilter>& value) { m_noteTextHasBeenSet = true; m_noteText = value; }

    /**
     * <p> The text of a user-defined note that's added to a finding. </p> <p> Array
     * Members: Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline void SetNoteText(Aws::Vector<StringFilter>&& value) { m_noteTextHasBeenSet = true; m_noteText = std::move(value); }

    /**
     * <p> The text of a user-defined note that's added to a finding. </p> <p> Array
     * Members: Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& WithNoteText(const Aws::Vector<StringFilter>& value) { SetNoteText(value); return *this;}

    /**
     * <p> The text of a user-defined note that's added to a finding. </p> <p> Array
     * Members: Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& WithNoteText(Aws::Vector<StringFilter>&& value) { SetNoteText(std::move(value)); return *this;}

    /**
     * <p> The text of a user-defined note that's added to a finding. </p> <p> Array
     * Members: Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& AddNoteText(const StringFilter& value) { m_noteTextHasBeenSet = true; m_noteText.push_back(value); return *this; }

    /**
     * <p> The text of a user-defined note that's added to a finding. </p> <p> Array
     * Members: Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& AddNoteText(StringFilter&& value) { m_noteTextHasBeenSet = true; m_noteText.push_back(std::move(value)); return *this; }


    /**
     * <p> The timestamp of when the note was updated. Uses the date-time format
     * specified in <a href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC
     * 3339 section 5.6, Internet Date/Time Format</a>. The value cannot contain
     * spaces. For example, <code>2020-03-22T13:22:13.933Z</code>. </p> <p> Array
     * Members: Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline const Aws::Vector<DateFilter>& GetNoteUpdatedAt() const{ return m_noteUpdatedAt; }

    /**
     * <p> The timestamp of when the note was updated. Uses the date-time format
     * specified in <a href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC
     * 3339 section 5.6, Internet Date/Time Format</a>. The value cannot contain
     * spaces. For example, <code>2020-03-22T13:22:13.933Z</code>. </p> <p> Array
     * Members: Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline bool NoteUpdatedAtHasBeenSet() const { return m_noteUpdatedAtHasBeenSet; }

    /**
     * <p> The timestamp of when the note was updated. Uses the date-time format
     * specified in <a href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC
     * 3339 section 5.6, Internet Date/Time Format</a>. The value cannot contain
     * spaces. For example, <code>2020-03-22T13:22:13.933Z</code>. </p> <p> Array
     * Members: Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline void SetNoteUpdatedAt(const Aws::Vector<DateFilter>& value) { m_noteUpdatedAtHasBeenSet = true; m_noteUpdatedAt = value; }

    /**
     * <p> The timestamp of when the note was updated. Uses the date-time format
     * specified in <a href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC
     * 3339 section 5.6, Internet Date/Time Format</a>. The value cannot contain
     * spaces. For example, <code>2020-03-22T13:22:13.933Z</code>. </p> <p> Array
     * Members: Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline void SetNoteUpdatedAt(Aws::Vector<DateFilter>&& value) { m_noteUpdatedAtHasBeenSet = true; m_noteUpdatedAt = std::move(value); }

    /**
     * <p> The timestamp of when the note was updated. Uses the date-time format
     * specified in <a href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC
     * 3339 section 5.6, Internet Date/Time Format</a>. The value cannot contain
     * spaces. For example, <code>2020-03-22T13:22:13.933Z</code>. </p> <p> Array
     * Members: Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& WithNoteUpdatedAt(const Aws::Vector<DateFilter>& value) { SetNoteUpdatedAt(value); return *this;}

    /**
     * <p> The timestamp of when the note was updated. Uses the date-time format
     * specified in <a href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC
     * 3339 section 5.6, Internet Date/Time Format</a>. The value cannot contain
     * spaces. For example, <code>2020-03-22T13:22:13.933Z</code>. </p> <p> Array
     * Members: Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& WithNoteUpdatedAt(Aws::Vector<DateFilter>&& value) { SetNoteUpdatedAt(std::move(value)); return *this;}

    /**
     * <p> The timestamp of when the note was updated. Uses the date-time format
     * specified in <a href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC
     * 3339 section 5.6, Internet Date/Time Format</a>. The value cannot contain
     * spaces. For example, <code>2020-03-22T13:22:13.933Z</code>. </p> <p> Array
     * Members: Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& AddNoteUpdatedAt(const DateFilter& value) { m_noteUpdatedAtHasBeenSet = true; m_noteUpdatedAt.push_back(value); return *this; }

    /**
     * <p> The timestamp of when the note was updated. Uses the date-time format
     * specified in <a href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC
     * 3339 section 5.6, Internet Date/Time Format</a>. The value cannot contain
     * spaces. For example, <code>2020-03-22T13:22:13.933Z</code>. </p> <p> Array
     * Members: Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& AddNoteUpdatedAt(DateFilter&& value) { m_noteUpdatedAtHasBeenSet = true; m_noteUpdatedAt.push_back(std::move(value)); return *this; }


    /**
     * <p> The principal that created a note. </p> <p> Array Members: Minimum number of
     * 1 item. Maximum number of 20 items. </p>
     */
    inline const Aws::Vector<StringFilter>& GetNoteUpdatedBy() const{ return m_noteUpdatedBy; }

    /**
     * <p> The principal that created a note. </p> <p> Array Members: Minimum number of
     * 1 item. Maximum number of 20 items. </p>
     */
    inline bool NoteUpdatedByHasBeenSet() const { return m_noteUpdatedByHasBeenSet; }

    /**
     * <p> The principal that created a note. </p> <p> Array Members: Minimum number of
     * 1 item. Maximum number of 20 items. </p>
     */
    inline void SetNoteUpdatedBy(const Aws::Vector<StringFilter>& value) { m_noteUpdatedByHasBeenSet = true; m_noteUpdatedBy = value; }

    /**
     * <p> The principal that created a note. </p> <p> Array Members: Minimum number of
     * 1 item. Maximum number of 20 items. </p>
     */
    inline void SetNoteUpdatedBy(Aws::Vector<StringFilter>&& value) { m_noteUpdatedByHasBeenSet = true; m_noteUpdatedBy = std::move(value); }

    /**
     * <p> The principal that created a note. </p> <p> Array Members: Minimum number of
     * 1 item. Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& WithNoteUpdatedBy(const Aws::Vector<StringFilter>& value) { SetNoteUpdatedBy(value); return *this;}

    /**
     * <p> The principal that created a note. </p> <p> Array Members: Minimum number of
     * 1 item. Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& WithNoteUpdatedBy(Aws::Vector<StringFilter>&& value) { SetNoteUpdatedBy(std::move(value)); return *this;}

    /**
     * <p> The principal that created a note. </p> <p> Array Members: Minimum number of
     * 1 item. Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& AddNoteUpdatedBy(const StringFilter& value) { m_noteUpdatedByHasBeenSet = true; m_noteUpdatedBy.push_back(value); return *this; }

    /**
     * <p> The principal that created a note. </p> <p> Array Members: Minimum number of
     * 1 item. Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& AddNoteUpdatedBy(StringFilter&& value) { m_noteUpdatedByHasBeenSet = true; m_noteUpdatedBy.push_back(std::move(value)); return *this; }


    /**
     * <p> A list of user-defined name and value string pairs added to a finding. </p>
     * <p> Array Members: Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline const Aws::Vector<MapFilter>& GetUserDefinedFields() const{ return m_userDefinedFields; }

    /**
     * <p> A list of user-defined name and value string pairs added to a finding. </p>
     * <p> Array Members: Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline bool UserDefinedFieldsHasBeenSet() const { return m_userDefinedFieldsHasBeenSet; }

    /**
     * <p> A list of user-defined name and value string pairs added to a finding. </p>
     * <p> Array Members: Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline void SetUserDefinedFields(const Aws::Vector<MapFilter>& value) { m_userDefinedFieldsHasBeenSet = true; m_userDefinedFields = value; }

    /**
     * <p> A list of user-defined name and value string pairs added to a finding. </p>
     * <p> Array Members: Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline void SetUserDefinedFields(Aws::Vector<MapFilter>&& value) { m_userDefinedFieldsHasBeenSet = true; m_userDefinedFields = std::move(value); }

    /**
     * <p> A list of user-defined name and value string pairs added to a finding. </p>
     * <p> Array Members: Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& WithUserDefinedFields(const Aws::Vector<MapFilter>& value) { SetUserDefinedFields(value); return *this;}

    /**
     * <p> A list of user-defined name and value string pairs added to a finding. </p>
     * <p> Array Members: Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& WithUserDefinedFields(Aws::Vector<MapFilter>&& value) { SetUserDefinedFields(std::move(value)); return *this;}

    /**
     * <p> A list of user-defined name and value string pairs added to a finding. </p>
     * <p> Array Members: Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& AddUserDefinedFields(const MapFilter& value) { m_userDefinedFieldsHasBeenSet = true; m_userDefinedFields.push_back(value); return *this; }

    /**
     * <p> A list of user-defined name and value string pairs added to a finding. </p>
     * <p> Array Members: Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& AddUserDefinedFields(MapFilter&& value) { m_userDefinedFieldsHasBeenSet = true; m_userDefinedFields.push_back(std::move(value)); return *this; }


    /**
     * <p> The Amazon Resource Name (ARN) of the application that is related to a
     * finding. </p> <p> Array Members: Minimum number of 1 item. Maximum number of 20
     * items. </p>
     */
    inline const Aws::Vector<StringFilter>& GetResourceApplicationArn() const{ return m_resourceApplicationArn; }

    /**
     * <p> The Amazon Resource Name (ARN) of the application that is related to a
     * finding. </p> <p> Array Members: Minimum number of 1 item. Maximum number of 20
     * items. </p>
     */
    inline bool ResourceApplicationArnHasBeenSet() const { return m_resourceApplicationArnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) of the application that is related to a
     * finding. </p> <p> Array Members: Minimum number of 1 item. Maximum number of 20
     * items. </p>
     */
    inline void SetResourceApplicationArn(const Aws::Vector<StringFilter>& value) { m_resourceApplicationArnHasBeenSet = true; m_resourceApplicationArn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of the application that is related to a
     * finding. </p> <p> Array Members: Minimum number of 1 item. Maximum number of 20
     * items. </p>
     */
    inline void SetResourceApplicationArn(Aws::Vector<StringFilter>&& value) { m_resourceApplicationArnHasBeenSet = true; m_resourceApplicationArn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the application that is related to a
     * finding. </p> <p> Array Members: Minimum number of 1 item. Maximum number of 20
     * items. </p>
     */
    inline AutomationRulesFindingFilters& WithResourceApplicationArn(const Aws::Vector<StringFilter>& value) { SetResourceApplicationArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the application that is related to a
     * finding. </p> <p> Array Members: Minimum number of 1 item. Maximum number of 20
     * items. </p>
     */
    inline AutomationRulesFindingFilters& WithResourceApplicationArn(Aws::Vector<StringFilter>&& value) { SetResourceApplicationArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the application that is related to a
     * finding. </p> <p> Array Members: Minimum number of 1 item. Maximum number of 20
     * items. </p>
     */
    inline AutomationRulesFindingFilters& AddResourceApplicationArn(const StringFilter& value) { m_resourceApplicationArnHasBeenSet = true; m_resourceApplicationArn.push_back(value); return *this; }

    /**
     * <p> The Amazon Resource Name (ARN) of the application that is related to a
     * finding. </p> <p> Array Members: Minimum number of 1 item. Maximum number of 20
     * items. </p>
     */
    inline AutomationRulesFindingFilters& AddResourceApplicationArn(StringFilter&& value) { m_resourceApplicationArnHasBeenSet = true; m_resourceApplicationArn.push_back(std::move(value)); return *this; }


    /**
     * <p> The name of the application that is related to a finding. </p> <p> Array
     * Members: Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline const Aws::Vector<StringFilter>& GetResourceApplicationName() const{ return m_resourceApplicationName; }

    /**
     * <p> The name of the application that is related to a finding. </p> <p> Array
     * Members: Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline bool ResourceApplicationNameHasBeenSet() const { return m_resourceApplicationNameHasBeenSet; }

    /**
     * <p> The name of the application that is related to a finding. </p> <p> Array
     * Members: Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline void SetResourceApplicationName(const Aws::Vector<StringFilter>& value) { m_resourceApplicationNameHasBeenSet = true; m_resourceApplicationName = value; }

    /**
     * <p> The name of the application that is related to a finding. </p> <p> Array
     * Members: Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline void SetResourceApplicationName(Aws::Vector<StringFilter>&& value) { m_resourceApplicationNameHasBeenSet = true; m_resourceApplicationName = std::move(value); }

    /**
     * <p> The name of the application that is related to a finding. </p> <p> Array
     * Members: Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& WithResourceApplicationName(const Aws::Vector<StringFilter>& value) { SetResourceApplicationName(value); return *this;}

    /**
     * <p> The name of the application that is related to a finding. </p> <p> Array
     * Members: Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& WithResourceApplicationName(Aws::Vector<StringFilter>&& value) { SetResourceApplicationName(std::move(value)); return *this;}

    /**
     * <p> The name of the application that is related to a finding. </p> <p> Array
     * Members: Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& AddResourceApplicationName(const StringFilter& value) { m_resourceApplicationNameHasBeenSet = true; m_resourceApplicationName.push_back(value); return *this; }

    /**
     * <p> The name of the application that is related to a finding. </p> <p> Array
     * Members: Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline AutomationRulesFindingFilters& AddResourceApplicationName(StringFilter&& value) { m_resourceApplicationNameHasBeenSet = true; m_resourceApplicationName.push_back(std::move(value)); return *this; }


    /**
     * <p>The name of the Amazon Web Services account in which a finding was generated.
     * </p> <p> Array Members: Minimum number of 1 item. Maximum number of 20 items.
     * </p>
     */
    inline const Aws::Vector<StringFilter>& GetAwsAccountName() const{ return m_awsAccountName; }

    /**
     * <p>The name of the Amazon Web Services account in which a finding was generated.
     * </p> <p> Array Members: Minimum number of 1 item. Maximum number of 20 items.
     * </p>
     */
    inline bool AwsAccountNameHasBeenSet() const { return m_awsAccountNameHasBeenSet; }

    /**
     * <p>The name of the Amazon Web Services account in which a finding was generated.
     * </p> <p> Array Members: Minimum number of 1 item. Maximum number of 20 items.
     * </p>
     */
    inline void SetAwsAccountName(const Aws::Vector<StringFilter>& value) { m_awsAccountNameHasBeenSet = true; m_awsAccountName = value; }

    /**
     * <p>The name of the Amazon Web Services account in which a finding was generated.
     * </p> <p> Array Members: Minimum number of 1 item. Maximum number of 20 items.
     * </p>
     */
    inline void SetAwsAccountName(Aws::Vector<StringFilter>&& value) { m_awsAccountNameHasBeenSet = true; m_awsAccountName = std::move(value); }

    /**
     * <p>The name of the Amazon Web Services account in which a finding was generated.
     * </p> <p> Array Members: Minimum number of 1 item. Maximum number of 20 items.
     * </p>
     */
    inline AutomationRulesFindingFilters& WithAwsAccountName(const Aws::Vector<StringFilter>& value) { SetAwsAccountName(value); return *this;}

    /**
     * <p>The name of the Amazon Web Services account in which a finding was generated.
     * </p> <p> Array Members: Minimum number of 1 item. Maximum number of 20 items.
     * </p>
     */
    inline AutomationRulesFindingFilters& WithAwsAccountName(Aws::Vector<StringFilter>&& value) { SetAwsAccountName(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon Web Services account in which a finding was generated.
     * </p> <p> Array Members: Minimum number of 1 item. Maximum number of 20 items.
     * </p>
     */
    inline AutomationRulesFindingFilters& AddAwsAccountName(const StringFilter& value) { m_awsAccountNameHasBeenSet = true; m_awsAccountName.push_back(value); return *this; }

    /**
     * <p>The name of the Amazon Web Services account in which a finding was generated.
     * </p> <p> Array Members: Minimum number of 1 item. Maximum number of 20 items.
     * </p>
     */
    inline AutomationRulesFindingFilters& AddAwsAccountName(StringFilter&& value) { m_awsAccountNameHasBeenSet = true; m_awsAccountName.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<StringFilter> m_productArn;
    bool m_productArnHasBeenSet = false;

    Aws::Vector<StringFilter> m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::Vector<StringFilter> m_id;
    bool m_idHasBeenSet = false;

    Aws::Vector<StringFilter> m_generatorId;
    bool m_generatorIdHasBeenSet = false;

    Aws::Vector<StringFilter> m_type;
    bool m_typeHasBeenSet = false;

    Aws::Vector<DateFilter> m_firstObservedAt;
    bool m_firstObservedAtHasBeenSet = false;

    Aws::Vector<DateFilter> m_lastObservedAt;
    bool m_lastObservedAtHasBeenSet = false;

    Aws::Vector<DateFilter> m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Vector<DateFilter> m_updatedAt;
    bool m_updatedAtHasBeenSet = false;

    Aws::Vector<NumberFilter> m_confidence;
    bool m_confidenceHasBeenSet = false;

    Aws::Vector<NumberFilter> m_criticality;
    bool m_criticalityHasBeenSet = false;

    Aws::Vector<StringFilter> m_title;
    bool m_titleHasBeenSet = false;

    Aws::Vector<StringFilter> m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<StringFilter> m_sourceUrl;
    bool m_sourceUrlHasBeenSet = false;

    Aws::Vector<StringFilter> m_productName;
    bool m_productNameHasBeenSet = false;

    Aws::Vector<StringFilter> m_companyName;
    bool m_companyNameHasBeenSet = false;

    Aws::Vector<StringFilter> m_severityLabel;
    bool m_severityLabelHasBeenSet = false;

    Aws::Vector<StringFilter> m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::Vector<StringFilter> m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::Vector<StringFilter> m_resourcePartition;
    bool m_resourcePartitionHasBeenSet = false;

    Aws::Vector<StringFilter> m_resourceRegion;
    bool m_resourceRegionHasBeenSet = false;

    Aws::Vector<MapFilter> m_resourceTags;
    bool m_resourceTagsHasBeenSet = false;

    Aws::Vector<MapFilter> m_resourceDetailsOther;
    bool m_resourceDetailsOtherHasBeenSet = false;

    Aws::Vector<StringFilter> m_complianceStatus;
    bool m_complianceStatusHasBeenSet = false;

    Aws::Vector<StringFilter> m_complianceSecurityControlId;
    bool m_complianceSecurityControlIdHasBeenSet = false;

    Aws::Vector<StringFilter> m_complianceAssociatedStandardsId;
    bool m_complianceAssociatedStandardsIdHasBeenSet = false;

    Aws::Vector<StringFilter> m_verificationState;
    bool m_verificationStateHasBeenSet = false;

    Aws::Vector<StringFilter> m_workflowStatus;
    bool m_workflowStatusHasBeenSet = false;

    Aws::Vector<StringFilter> m_recordState;
    bool m_recordStateHasBeenSet = false;

    Aws::Vector<StringFilter> m_relatedFindingsProductArn;
    bool m_relatedFindingsProductArnHasBeenSet = false;

    Aws::Vector<StringFilter> m_relatedFindingsId;
    bool m_relatedFindingsIdHasBeenSet = false;

    Aws::Vector<StringFilter> m_noteText;
    bool m_noteTextHasBeenSet = false;

    Aws::Vector<DateFilter> m_noteUpdatedAt;
    bool m_noteUpdatedAtHasBeenSet = false;

    Aws::Vector<StringFilter> m_noteUpdatedBy;
    bool m_noteUpdatedByHasBeenSet = false;

    Aws::Vector<MapFilter> m_userDefinedFields;
    bool m_userDefinedFieldsHasBeenSet = false;

    Aws::Vector<StringFilter> m_resourceApplicationArn;
    bool m_resourceApplicationArnHasBeenSet = false;

    Aws::Vector<StringFilter> m_resourceApplicationName;
    bool m_resourceApplicationNameHasBeenSet = false;

    Aws::Vector<StringFilter> m_awsAccountName;
    bool m_awsAccountNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
