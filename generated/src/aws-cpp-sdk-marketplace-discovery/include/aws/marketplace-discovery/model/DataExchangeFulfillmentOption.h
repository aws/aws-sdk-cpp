/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/marketplace-discovery/MarketplaceDiscovery_EXPORTS.h>
#include <aws/marketplace-discovery/model/DataArtifact.h>
#include <aws/marketplace-discovery/model/FulfillmentOptionType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MarketplaceDiscovery {
namespace Model {

/**
 * <p>Describes an AWS Data Exchange fulfillment option for data set
 * delivery.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-discovery-2026-02-05/DataExchangeFulfillmentOption">AWS
 * API Reference</a></p>
 */
class DataExchangeFulfillmentOption {
 public:
  AWS_MARKETPLACEDISCOVERY_API DataExchangeFulfillmentOption() = default;
  AWS_MARKETPLACEDISCOVERY_API DataExchangeFulfillmentOption(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API DataExchangeFulfillmentOption& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the fulfillment option.</p>
   */
  inline const Aws::String& GetFulfillmentOptionId() const { return m_fulfillmentOptionId; }
  inline bool FulfillmentOptionIdHasBeenSet() const { return m_fulfillmentOptionIdHasBeenSet; }
  template <typename FulfillmentOptionIdT = Aws::String>
  void SetFulfillmentOptionId(FulfillmentOptionIdT&& value) {
    m_fulfillmentOptionIdHasBeenSet = true;
    m_fulfillmentOptionId = std::forward<FulfillmentOptionIdT>(value);
  }
  template <typename FulfillmentOptionIdT = Aws::String>
  DataExchangeFulfillmentOption& WithFulfillmentOptionId(FulfillmentOptionIdT&& value) {
    SetFulfillmentOptionId(std::forward<FulfillmentOptionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The category of the fulfillment option.</p>
   */
  inline FulfillmentOptionType GetFulfillmentOptionType() const { return m_fulfillmentOptionType; }
  inline bool FulfillmentOptionTypeHasBeenSet() const { return m_fulfillmentOptionTypeHasBeenSet; }
  inline void SetFulfillmentOptionType(FulfillmentOptionType value) {
    m_fulfillmentOptionTypeHasBeenSet = true;
    m_fulfillmentOptionType = value;
  }
  inline DataExchangeFulfillmentOption& WithFulfillmentOptionType(FulfillmentOptionType value) {
    SetFulfillmentOptionType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A human-readable name for the fulfillment option type.</p>
   */
  inline const Aws::String& GetFulfillmentOptionDisplayName() const { return m_fulfillmentOptionDisplayName; }
  inline bool FulfillmentOptionDisplayNameHasBeenSet() const { return m_fulfillmentOptionDisplayNameHasBeenSet; }
  template <typename FulfillmentOptionDisplayNameT = Aws::String>
  void SetFulfillmentOptionDisplayName(FulfillmentOptionDisplayNameT&& value) {
    m_fulfillmentOptionDisplayNameHasBeenSet = true;
    m_fulfillmentOptionDisplayName = std::forward<FulfillmentOptionDisplayNameT>(value);
  }
  template <typename FulfillmentOptionDisplayNameT = Aws::String>
  DataExchangeFulfillmentOption& WithFulfillmentOptionDisplayName(FulfillmentOptionDisplayNameT&& value) {
    SetFulfillmentOptionDisplayName(std::forward<FulfillmentOptionDisplayNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The data artifacts included in this Data Exchange fulfillment option.</p>
   */
  inline const Aws::Vector<DataArtifact>& GetDataArtifacts() const { return m_dataArtifacts; }
  inline bool DataArtifactsHasBeenSet() const { return m_dataArtifactsHasBeenSet; }
  template <typename DataArtifactsT = Aws::Vector<DataArtifact>>
  void SetDataArtifacts(DataArtifactsT&& value) {
    m_dataArtifactsHasBeenSet = true;
    m_dataArtifacts = std::forward<DataArtifactsT>(value);
  }
  template <typename DataArtifactsT = Aws::Vector<DataArtifact>>
  DataExchangeFulfillmentOption& WithDataArtifacts(DataArtifactsT&& value) {
    SetDataArtifacts(std::forward<DataArtifactsT>(value));
    return *this;
  }
  template <typename DataArtifactsT = DataArtifact>
  DataExchangeFulfillmentOption& AddDataArtifacts(DataArtifactsT&& value) {
    m_dataArtifactsHasBeenSet = true;
    m_dataArtifacts.emplace_back(std::forward<DataArtifactsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_fulfillmentOptionId;

  FulfillmentOptionType m_fulfillmentOptionType{FulfillmentOptionType::NOT_SET};

  Aws::String m_fulfillmentOptionDisplayName;

  Aws::Vector<DataArtifact> m_dataArtifacts;
  bool m_fulfillmentOptionIdHasBeenSet = false;
  bool m_fulfillmentOptionTypeHasBeenSet = false;
  bool m_fulfillmentOptionDisplayNameHasBeenSet = false;
  bool m_dataArtifactsHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
