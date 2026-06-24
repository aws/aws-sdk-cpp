/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/outposts/model/EC2Capacity.h>
#include <aws/outposts/model/QuoteRackUseType.h>
#include <aws/outposts/model/RackUnitHeight.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Outposts {
namespace Model {

/**
 * <p>The physical specification details for a rack in a quote
 * option.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/RackSpecificationDetails">AWS
 * API Reference</a></p>
 */
class RackSpecificationDetails {
 public:
  AWS_OUTPOSTS_API RackSpecificationDetails() = default;
  AWS_OUTPOSTS_API RackSpecificationDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_OUTPOSTS_API RackSpecificationDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OUTPOSTS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ID of the rack.</p>
   */
  inline const Aws::String& GetRackId() const { return m_rackId; }
  inline bool RackIdHasBeenSet() const { return m_rackIdHasBeenSet; }
  template <typename RackIdT = Aws::String>
  void SetRackId(RackIdT&& value) {
    m_rackIdHasBeenSet = true;
    m_rackId = std::forward<RackIdT>(value);
  }
  template <typename RackIdT = Aws::String>
  RackSpecificationDetails& WithRackId(RackIdT&& value) {
    SetRackId(std::forward<RackIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The use of the rack. Valid values are <code>COMPUTE</code> and
   * <code>NETWORKING</code>.</p>
   */
  inline QuoteRackUseType GetRackUse() const { return m_rackUse; }
  inline bool RackUseHasBeenSet() const { return m_rackUseHasBeenSet; }
  inline void SetRackUse(QuoteRackUseType value) {
    m_rackUseHasBeenSet = true;
    m_rackUse = value;
  }
  inline RackSpecificationDetails& WithRackUse(QuoteRackUseType value) {
    SetRackUse(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum power draw of the rack in kVA.</p>
   */
  inline double GetRackPowerDrawKva() const { return m_rackPowerDrawKva; }
  inline bool RackPowerDrawKvaHasBeenSet() const { return m_rackPowerDrawKvaHasBeenSet; }
  inline void SetRackPowerDrawKva(double value) {
    m_rackPowerDrawKvaHasBeenSet = true;
    m_rackPowerDrawKva = value;
  }
  inline RackSpecificationDetails& WithRackPowerDrawKva(double value) {
    SetRackPowerDrawKva(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The weight of the rack in pounds.</p>
   */
  inline double GetRackWeightLbs() const { return m_rackWeightLbs; }
  inline bool RackWeightLbsHasBeenSet() const { return m_rackWeightLbsHasBeenSet; }
  inline void SetRackWeightLbs(double value) {
    m_rackWeightLbsHasBeenSet = true;
    m_rackWeightLbs = value;
  }
  inline RackSpecificationDetails& WithRackWeightLbs(double value) {
    SetRackWeightLbs(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The height of the rack in inches.</p>
   */
  inline double GetRackHeightInches() const { return m_rackHeightInches; }
  inline bool RackHeightInchesHasBeenSet() const { return m_rackHeightInchesHasBeenSet; }
  inline void SetRackHeightInches(double value) {
    m_rackHeightInchesHasBeenSet = true;
    m_rackHeightInches = value;
  }
  inline RackSpecificationDetails& WithRackHeightInches(double value) {
    SetRackHeightInches(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The width of the rack in inches.</p>
   */
  inline double GetRackWidthInches() const { return m_rackWidthInches; }
  inline bool RackWidthInchesHasBeenSet() const { return m_rackWidthInchesHasBeenSet; }
  inline void SetRackWidthInches(double value) {
    m_rackWidthInchesHasBeenSet = true;
    m_rackWidthInches = value;
  }
  inline RackSpecificationDetails& WithRackWidthInches(double value) {
    SetRackWidthInches(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The depth of the rack in inches.</p>
   */
  inline double GetRackDepthInches() const { return m_rackDepthInches; }
  inline bool RackDepthInchesHasBeenSet() const { return m_rackDepthInchesHasBeenSet; }
  inline void SetRackDepthInches(double value) {
    m_rackDepthInchesHasBeenSet = true;
    m_rackDepthInches = value;
  }
  inline RackSpecificationDetails& WithRackDepthInches(double value) {
    SetRackDepthInches(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The rack unit height.</p> <ul> <li> <p> <code>HEIGHT_42U</code> - 42 rack
   * units.</p> </li> <li> <p> <code>HEIGHT_2U</code> - 2 rack units.</p> </li> <li>
   * <p> <code>HEIGHT_1U</code> - 1 rack unit.</p> </li> </ul>
   */
  inline RackUnitHeight GetRackUnitHeight() const { return m_rackUnitHeight; }
  inline bool RackUnitHeightHasBeenSet() const { return m_rackUnitHeightHasBeenSet; }
  inline void SetRackUnitHeight(RackUnitHeight value) {
    m_rackUnitHeightHasBeenSet = true;
    m_rackUnitHeight = value;
  }
  inline RackSpecificationDetails& WithRackUnitHeight(RackUnitHeight value) {
    SetRackUnitHeight(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon EC2 capacities for the rack.</p>
   */
  inline const Aws::Vector<EC2Capacity>& GetEC2Capacities() const { return m_eC2Capacities; }
  inline bool EC2CapacitiesHasBeenSet() const { return m_eC2CapacitiesHasBeenSet; }
  template <typename EC2CapacitiesT = Aws::Vector<EC2Capacity>>
  void SetEC2Capacities(EC2CapacitiesT&& value) {
    m_eC2CapacitiesHasBeenSet = true;
    m_eC2Capacities = std::forward<EC2CapacitiesT>(value);
  }
  template <typename EC2CapacitiesT = Aws::Vector<EC2Capacity>>
  RackSpecificationDetails& WithEC2Capacities(EC2CapacitiesT&& value) {
    SetEC2Capacities(std::forward<EC2CapacitiesT>(value));
    return *this;
  }
  template <typename EC2CapacitiesT = EC2Capacity>
  RackSpecificationDetails& AddEC2Capacities(EC2CapacitiesT&& value) {
    m_eC2CapacitiesHasBeenSet = true;
    m_eC2Capacities.emplace_back(std::forward<EC2CapacitiesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_rackId;

  QuoteRackUseType m_rackUse{QuoteRackUseType::NOT_SET};

  double m_rackPowerDrawKva{0.0};

  double m_rackWeightLbs{0.0};

  double m_rackHeightInches{0.0};

  double m_rackWidthInches{0.0};

  double m_rackDepthInches{0.0};

  RackUnitHeight m_rackUnitHeight{RackUnitHeight::NOT_SET};

  Aws::Vector<EC2Capacity> m_eC2Capacities;
  bool m_rackIdHasBeenSet = false;
  bool m_rackUseHasBeenSet = false;
  bool m_rackPowerDrawKvaHasBeenSet = false;
  bool m_rackWeightLbsHasBeenSet = false;
  bool m_rackHeightInchesHasBeenSet = false;
  bool m_rackWidthInchesHasBeenSet = false;
  bool m_rackDepthInchesHasBeenSet = false;
  bool m_rackUnitHeightHasBeenSet = false;
  bool m_eC2CapacitiesHasBeenSet = false;
};

}  // namespace Model
}  // namespace Outposts
}  // namespace Aws
