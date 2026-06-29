/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resource-explorer-2/ResourceExplorer2_EXPORTS.h>
#include <aws/resource-explorer-2/model/RecorderType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ResourceExplorer2 {
namespace Model {

/**
 * <p>Contains information about the service-linked recorder paired with a service
 * view.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/resource-explorer-2-2022-07-28/ServiceLinkedRecorderInfo">AWS
 * API Reference</a></p>
 */
class ServiceLinkedRecorderInfo {
 public:
  AWS_RESOURCEEXPLORER2_API ServiceLinkedRecorderInfo() = default;
  AWS_RESOURCEEXPLORER2_API ServiceLinkedRecorderInfo(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESOURCEEXPLORER2_API ServiceLinkedRecorderInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESOURCEEXPLORER2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The service principal of the Amazon Web Services service that owns the
   * service-linked recorder, such as
   * <code>observabilityadmin.amazonaws.com</code>.</p>
   */
  inline const Aws::String& GetServicePrincipal() const { return m_servicePrincipal; }
  inline bool ServicePrincipalHasBeenSet() const { return m_servicePrincipalHasBeenSet; }
  template <typename ServicePrincipalT = Aws::String>
  void SetServicePrincipal(ServicePrincipalT&& value) {
    m_servicePrincipalHasBeenSet = true;
    m_servicePrincipal = std::forward<ServicePrincipalT>(value);
  }
  template <typename ServicePrincipalT = Aws::String>
  ServiceLinkedRecorderInfo& WithServicePrincipal(ServicePrincipalT&& value) {
    SetServicePrincipal(std::forward<ServicePrincipalT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the service-linked recorder, such as
   * <code>AWSConfigurationRecorderForObservabilityAdmin</code>.</p>
   */
  inline const Aws::String& GetRecorderName() const { return m_recorderName; }
  inline bool RecorderNameHasBeenSet() const { return m_recorderNameHasBeenSet; }
  template <typename RecorderNameT = Aws::String>
  void SetRecorderName(RecorderNameT&& value) {
    m_recorderNameHasBeenSet = true;
    m_recorderName = std::forward<RecorderNameT>(value);
  }
  template <typename RecorderNameT = Aws::String>
  ServiceLinkedRecorderInfo& WithRecorderName(RecorderNameT&& value) {
    SetRecorderName(std::forward<RecorderNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the recorder. Valid values are <code>AWS</code> and
   * <code>THIRD_PARTY</code>.</p>
   */
  inline RecorderType GetRecorderType() const { return m_recorderType; }
  inline bool RecorderTypeHasBeenSet() const { return m_recorderTypeHasBeenSet; }
  inline void SetRecorderType(RecorderType value) {
    m_recorderTypeHasBeenSet = true;
    m_recorderType = value;
  }
  inline ServiceLinkedRecorderInfo& WithRecorderType(RecorderType value) {
    SetRecorderType(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_servicePrincipal;

  Aws::String m_recorderName;

  RecorderType m_recorderType{RecorderType::NOT_SET};
  bool m_servicePrincipalHasBeenSet = false;
  bool m_recorderNameHasBeenSet = false;
  bool m_recorderTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace ResourceExplorer2
}  // namespace Aws
