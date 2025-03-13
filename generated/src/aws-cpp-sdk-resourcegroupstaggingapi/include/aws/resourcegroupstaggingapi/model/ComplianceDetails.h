/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resourcegroupstaggingapi/ResourceGroupsTaggingAPI_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ResourceGroupsTaggingAPI
{
namespace Model
{

  /**
   * <p>Information that shows whether a resource is compliant with the effective tag
   * policy, including details on any noncompliant tag keys.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resourcegroupstaggingapi-2017-01-26/ComplianceDetails">AWS
   * API Reference</a></p>
   */
  class ComplianceDetails
  {
  public:
    AWS_RESOURCEGROUPSTAGGINGAPI_API ComplianceDetails() = default;
    AWS_RESOURCEGROUPSTAGGINGAPI_API ComplianceDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESOURCEGROUPSTAGGINGAPI_API ComplianceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESOURCEGROUPSTAGGINGAPI_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>These tag keys on the resource are noncompliant with the effective tag
     * policy.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNoncompliantKeys() const { return m_noncompliantKeys; }
    inline bool NoncompliantKeysHasBeenSet() const { return m_noncompliantKeysHasBeenSet; }
    template<typename NoncompliantKeysT = Aws::Vector<Aws::String>>
    void SetNoncompliantKeys(NoncompliantKeysT&& value) { m_noncompliantKeysHasBeenSet = true; m_noncompliantKeys = std::forward<NoncompliantKeysT>(value); }
    template<typename NoncompliantKeysT = Aws::Vector<Aws::String>>
    ComplianceDetails& WithNoncompliantKeys(NoncompliantKeysT&& value) { SetNoncompliantKeys(std::forward<NoncompliantKeysT>(value)); return *this;}
    template<typename NoncompliantKeysT = Aws::String>
    ComplianceDetails& AddNoncompliantKeys(NoncompliantKeysT&& value) { m_noncompliantKeysHasBeenSet = true; m_noncompliantKeys.emplace_back(std::forward<NoncompliantKeysT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>These are keys defined in the effective policy that are on the resource with
     * either incorrect case treatment or noncompliant values. </p>
     */
    inline const Aws::Vector<Aws::String>& GetKeysWithNoncompliantValues() const { return m_keysWithNoncompliantValues; }
    inline bool KeysWithNoncompliantValuesHasBeenSet() const { return m_keysWithNoncompliantValuesHasBeenSet; }
    template<typename KeysWithNoncompliantValuesT = Aws::Vector<Aws::String>>
    void SetKeysWithNoncompliantValues(KeysWithNoncompliantValuesT&& value) { m_keysWithNoncompliantValuesHasBeenSet = true; m_keysWithNoncompliantValues = std::forward<KeysWithNoncompliantValuesT>(value); }
    template<typename KeysWithNoncompliantValuesT = Aws::Vector<Aws::String>>
    ComplianceDetails& WithKeysWithNoncompliantValues(KeysWithNoncompliantValuesT&& value) { SetKeysWithNoncompliantValues(std::forward<KeysWithNoncompliantValuesT>(value)); return *this;}
    template<typename KeysWithNoncompliantValuesT = Aws::String>
    ComplianceDetails& AddKeysWithNoncompliantValues(KeysWithNoncompliantValuesT&& value) { m_keysWithNoncompliantValuesHasBeenSet = true; m_keysWithNoncompliantValues.emplace_back(std::forward<KeysWithNoncompliantValuesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Whether a resource is compliant with the effective tag policy.</p>
     */
    inline bool GetComplianceStatus() const { return m_complianceStatus; }
    inline bool ComplianceStatusHasBeenSet() const { return m_complianceStatusHasBeenSet; }
    inline void SetComplianceStatus(bool value) { m_complianceStatusHasBeenSet = true; m_complianceStatus = value; }
    inline ComplianceDetails& WithComplianceStatus(bool value) { SetComplianceStatus(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_noncompliantKeys;
    bool m_noncompliantKeysHasBeenSet = false;

    Aws::Vector<Aws::String> m_keysWithNoncompliantValues;
    bool m_keysWithNoncompliantValuesHasBeenSet = false;

    bool m_complianceStatus{false};
    bool m_complianceStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace ResourceGroupsTaggingAPI
} // namespace Aws
