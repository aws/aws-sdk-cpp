/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/outposts/model/EC2Capacity.h>
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
 * <p>The physical specification details for a server in a quote
 * option.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/ServerSpecificationDetails">AWS
 * API Reference</a></p>
 */
class ServerSpecificationDetails {
 public:
  AWS_OUTPOSTS_API ServerSpecificationDetails() = default;
  AWS_OUTPOSTS_API ServerSpecificationDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_OUTPOSTS_API ServerSpecificationDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OUTPOSTS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The maximum power draw of the server in kVA.</p>
   */
  inline double GetServerPowerDrawKva() const { return m_serverPowerDrawKva; }
  inline bool ServerPowerDrawKvaHasBeenSet() const { return m_serverPowerDrawKvaHasBeenSet; }
  inline void SetServerPowerDrawKva(double value) {
    m_serverPowerDrawKvaHasBeenSet = true;
    m_serverPowerDrawKva = value;
  }
  inline ServerSpecificationDetails& WithServerPowerDrawKva(double value) {
    SetServerPowerDrawKva(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The weight of the server in pounds.</p>
   */
  inline double GetServerWeightLbs() const { return m_serverWeightLbs; }
  inline bool ServerWeightLbsHasBeenSet() const { return m_serverWeightLbsHasBeenSet; }
  inline void SetServerWeightLbs(double value) {
    m_serverWeightLbsHasBeenSet = true;
    m_serverWeightLbs = value;
  }
  inline ServerSpecificationDetails& WithServerWeightLbs(double value) {
    SetServerWeightLbs(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The height of the server in inches.</p>
   */
  inline double GetServerHeightInches() const { return m_serverHeightInches; }
  inline bool ServerHeightInchesHasBeenSet() const { return m_serverHeightInchesHasBeenSet; }
  inline void SetServerHeightInches(double value) {
    m_serverHeightInchesHasBeenSet = true;
    m_serverHeightInches = value;
  }
  inline ServerSpecificationDetails& WithServerHeightInches(double value) {
    SetServerHeightInches(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The width of the server in inches.</p>
   */
  inline double GetServerWidthInches() const { return m_serverWidthInches; }
  inline bool ServerWidthInchesHasBeenSet() const { return m_serverWidthInchesHasBeenSet; }
  inline void SetServerWidthInches(double value) {
    m_serverWidthInchesHasBeenSet = true;
    m_serverWidthInches = value;
  }
  inline ServerSpecificationDetails& WithServerWidthInches(double value) {
    SetServerWidthInches(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The depth of the server in inches.</p>
   */
  inline double GetServerDepthInches() const { return m_serverDepthInches; }
  inline bool ServerDepthInchesHasBeenSet() const { return m_serverDepthInchesHasBeenSet; }
  inline void SetServerDepthInches(double value) {
    m_serverDepthInchesHasBeenSet = true;
    m_serverDepthInches = value;
  }
  inline ServerSpecificationDetails& WithServerDepthInches(double value) {
    SetServerDepthInches(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The rack unit height of the server.</p> <ul> <li> <p> <code>HEIGHT_2U</code>
   * - 2 rack units.</p> </li> <li> <p> <code>HEIGHT_1U</code> - 1 rack unit.</p>
   * </li> </ul>
   */
  inline RackUnitHeight GetRackUnitHeight() const { return m_rackUnitHeight; }
  inline bool RackUnitHeightHasBeenSet() const { return m_rackUnitHeightHasBeenSet; }
  inline void SetRackUnitHeight(RackUnitHeight value) {
    m_rackUnitHeightHasBeenSet = true;
    m_rackUnitHeight = value;
  }
  inline ServerSpecificationDetails& WithRackUnitHeight(RackUnitHeight value) {
    SetRackUnitHeight(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon EC2 capacities for the server.</p>
   */
  inline const Aws::Vector<EC2Capacity>& GetEC2Capacities() const { return m_eC2Capacities; }
  inline bool EC2CapacitiesHasBeenSet() const { return m_eC2CapacitiesHasBeenSet; }
  template <typename EC2CapacitiesT = Aws::Vector<EC2Capacity>>
  void SetEC2Capacities(EC2CapacitiesT&& value) {
    m_eC2CapacitiesHasBeenSet = true;
    m_eC2Capacities = std::forward<EC2CapacitiesT>(value);
  }
  template <typename EC2CapacitiesT = Aws::Vector<EC2Capacity>>
  ServerSpecificationDetails& WithEC2Capacities(EC2CapacitiesT&& value) {
    SetEC2Capacities(std::forward<EC2CapacitiesT>(value));
    return *this;
  }
  template <typename EC2CapacitiesT = EC2Capacity>
  ServerSpecificationDetails& AddEC2Capacities(EC2CapacitiesT&& value) {
    m_eC2CapacitiesHasBeenSet = true;
    m_eC2Capacities.emplace_back(std::forward<EC2CapacitiesT>(value));
    return *this;
  }
  ///@}
 private:
  double m_serverPowerDrawKva{0.0};

  double m_serverWeightLbs{0.0};

  double m_serverHeightInches{0.0};

  double m_serverWidthInches{0.0};

  double m_serverDepthInches{0.0};

  RackUnitHeight m_rackUnitHeight{RackUnitHeight::NOT_SET};

  Aws::Vector<EC2Capacity> m_eC2Capacities;
  bool m_serverPowerDrawKvaHasBeenSet = false;
  bool m_serverWeightLbsHasBeenSet = false;
  bool m_serverHeightInchesHasBeenSet = false;
  bool m_serverWidthInchesHasBeenSet = false;
  bool m_serverDepthInchesHasBeenSet = false;
  bool m_rackUnitHeightHasBeenSet = false;
  bool m_eC2CapacitiesHasBeenSet = false;
};

}  // namespace Model
}  // namespace Outposts
}  // namespace Aws
