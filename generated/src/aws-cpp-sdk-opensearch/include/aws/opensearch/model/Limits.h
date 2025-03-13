/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opensearch/model/InstanceLimits.h>
#include <aws/opensearch/model/StorageType.h>
#include <aws/opensearch/model/AdditionalLimit.h>
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
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>Limits for a given instance type and for each of its roles.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/Limits">AWS
   * API Reference</a></p>
   */
  class Limits
  {
  public:
    AWS_OPENSEARCHSERVICE_API Limits() = default;
    AWS_OPENSEARCHSERVICE_API Limits(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Limits& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Storage-related attributes that are available for a given instance type.</p>
     */
    inline const Aws::Vector<StorageType>& GetStorageTypes() const { return m_storageTypes; }
    inline bool StorageTypesHasBeenSet() const { return m_storageTypesHasBeenSet; }
    template<typename StorageTypesT = Aws::Vector<StorageType>>
    void SetStorageTypes(StorageTypesT&& value) { m_storageTypesHasBeenSet = true; m_storageTypes = std::forward<StorageTypesT>(value); }
    template<typename StorageTypesT = Aws::Vector<StorageType>>
    Limits& WithStorageTypes(StorageTypesT&& value) { SetStorageTypes(std::forward<StorageTypesT>(value)); return *this;}
    template<typename StorageTypesT = StorageType>
    Limits& AddStorageTypes(StorageTypesT&& value) { m_storageTypesHasBeenSet = true; m_storageTypes.emplace_back(std::forward<StorageTypesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The limits for a given instance type.</p>
     */
    inline const InstanceLimits& GetInstanceLimits() const { return m_instanceLimits; }
    inline bool InstanceLimitsHasBeenSet() const { return m_instanceLimitsHasBeenSet; }
    template<typename InstanceLimitsT = InstanceLimits>
    void SetInstanceLimits(InstanceLimitsT&& value) { m_instanceLimitsHasBeenSet = true; m_instanceLimits = std::forward<InstanceLimitsT>(value); }
    template<typename InstanceLimitsT = InstanceLimits>
    Limits& WithInstanceLimits(InstanceLimitsT&& value) { SetInstanceLimits(std::forward<InstanceLimitsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of additional limits that are specific to a given instance type for each
     * of its instance roles.</p>
     */
    inline const Aws::Vector<AdditionalLimit>& GetAdditionalLimits() const { return m_additionalLimits; }
    inline bool AdditionalLimitsHasBeenSet() const { return m_additionalLimitsHasBeenSet; }
    template<typename AdditionalLimitsT = Aws::Vector<AdditionalLimit>>
    void SetAdditionalLimits(AdditionalLimitsT&& value) { m_additionalLimitsHasBeenSet = true; m_additionalLimits = std::forward<AdditionalLimitsT>(value); }
    template<typename AdditionalLimitsT = Aws::Vector<AdditionalLimit>>
    Limits& WithAdditionalLimits(AdditionalLimitsT&& value) { SetAdditionalLimits(std::forward<AdditionalLimitsT>(value)); return *this;}
    template<typename AdditionalLimitsT = AdditionalLimit>
    Limits& AddAdditionalLimits(AdditionalLimitsT&& value) { m_additionalLimitsHasBeenSet = true; m_additionalLimits.emplace_back(std::forward<AdditionalLimitsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<StorageType> m_storageTypes;
    bool m_storageTypesHasBeenSet = false;

    InstanceLimits m_instanceLimits;
    bool m_instanceLimitsHasBeenSet = false;

    Aws::Vector<AdditionalLimit> m_additionalLimits;
    bool m_additionalLimitsHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
