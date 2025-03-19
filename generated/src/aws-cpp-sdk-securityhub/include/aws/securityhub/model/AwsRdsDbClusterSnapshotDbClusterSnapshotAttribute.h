/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p> Contains the name and values of a manual Amazon Relational Database Service
   * (RDS) DB cluster snapshot attribute. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsRdsDbClusterSnapshotDbClusterSnapshotAttribute">AWS
   * API Reference</a></p>
   */
  class AwsRdsDbClusterSnapshotDbClusterSnapshotAttribute
  {
  public:
    AWS_SECURITYHUB_API AwsRdsDbClusterSnapshotDbClusterSnapshotAttribute() = default;
    AWS_SECURITYHUB_API AwsRdsDbClusterSnapshotDbClusterSnapshotAttribute(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsRdsDbClusterSnapshotDbClusterSnapshotAttribute& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The name of the manual DB cluster snapshot attribute. The attribute named
     * <code>restore</code> refers to the list of Amazon Web Services accounts that
     * have permission to copy or restore the manual DB cluster snapshot. </p>
     */
    inline const Aws::String& GetAttributeName() const { return m_attributeName; }
    inline bool AttributeNameHasBeenSet() const { return m_attributeNameHasBeenSet; }
    template<typename AttributeNameT = Aws::String>
    void SetAttributeName(AttributeNameT&& value) { m_attributeNameHasBeenSet = true; m_attributeName = std::forward<AttributeNameT>(value); }
    template<typename AttributeNameT = Aws::String>
    AwsRdsDbClusterSnapshotDbClusterSnapshotAttribute& WithAttributeName(AttributeNameT&& value) { SetAttributeName(std::forward<AttributeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The value(s) for the manual DB cluster snapshot attribute. If the
     * <code>AttributeName</code> field is set to <code>restore</code>, then this
     * element returns a list of IDs of the Amazon Web Services accounts that are
     * authorized to copy or restore the manual DB cluster snapshot. If a value of
     * <code>all</code> is in the list, then the manual DB cluster snapshot is public
     * and available for any Amazon Web Services account to copy or restore. </p>
     */
    inline const Aws::Vector<Aws::String>& GetAttributeValues() const { return m_attributeValues; }
    inline bool AttributeValuesHasBeenSet() const { return m_attributeValuesHasBeenSet; }
    template<typename AttributeValuesT = Aws::Vector<Aws::String>>
    void SetAttributeValues(AttributeValuesT&& value) { m_attributeValuesHasBeenSet = true; m_attributeValues = std::forward<AttributeValuesT>(value); }
    template<typename AttributeValuesT = Aws::Vector<Aws::String>>
    AwsRdsDbClusterSnapshotDbClusterSnapshotAttribute& WithAttributeValues(AttributeValuesT&& value) { SetAttributeValues(std::forward<AttributeValuesT>(value)); return *this;}
    template<typename AttributeValuesT = Aws::String>
    AwsRdsDbClusterSnapshotDbClusterSnapshotAttribute& AddAttributeValues(AttributeValuesT&& value) { m_attributeValuesHasBeenSet = true; m_attributeValues.emplace_back(std::forward<AttributeValuesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_attributeName;
    bool m_attributeNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_attributeValues;
    bool m_attributeValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
