/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
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
namespace Proton
{
namespace Model
{

  /**
   * <p>The detailed data about the current state of the component.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/ComponentState">AWS
   * API Reference</a></p>
   */
  class ComponentState
  {
  public:
    AWS_PROTON_API ComponentState() = default;
    AWS_PROTON_API ComponentState(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROTON_API ComponentState& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROTON_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the service instance that this component is attached to. Provided
     * when a component is attached to a service instance.</p>
     */
    inline const Aws::String& GetServiceInstanceName() const { return m_serviceInstanceName; }
    inline bool ServiceInstanceNameHasBeenSet() const { return m_serviceInstanceNameHasBeenSet; }
    template<typename ServiceInstanceNameT = Aws::String>
    void SetServiceInstanceName(ServiceInstanceNameT&& value) { m_serviceInstanceNameHasBeenSet = true; m_serviceInstanceName = std::forward<ServiceInstanceNameT>(value); }
    template<typename ServiceInstanceNameT = Aws::String>
    ComponentState& WithServiceInstanceName(ServiceInstanceNameT&& value) { SetServiceInstanceName(std::forward<ServiceInstanceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the service that <code>serviceInstanceName</code> is associated
     * with. Provided when a component is attached to a service instance.</p>
     */
    inline const Aws::String& GetServiceName() const { return m_serviceName; }
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }
    template<typename ServiceNameT = Aws::String>
    void SetServiceName(ServiceNameT&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::forward<ServiceNameT>(value); }
    template<typename ServiceNameT = Aws::String>
    ComponentState& WithServiceName(ServiceNameT&& value) { SetServiceName(std::forward<ServiceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The service spec that the component uses to access service inputs. Provided
     * when a component is attached to a service instance.</p>
     */
    inline const Aws::String& GetServiceSpec() const { return m_serviceSpec; }
    inline bool ServiceSpecHasBeenSet() const { return m_serviceSpecHasBeenSet; }
    template<typename ServiceSpecT = Aws::String>
    void SetServiceSpec(ServiceSpecT&& value) { m_serviceSpecHasBeenSet = true; m_serviceSpec = std::forward<ServiceSpecT>(value); }
    template<typename ServiceSpecT = Aws::String>
    ComponentState& WithServiceSpec(ServiceSpecT&& value) { SetServiceSpec(std::forward<ServiceSpecT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The template file used.</p>
     */
    inline const Aws::String& GetTemplateFile() const { return m_templateFile; }
    inline bool TemplateFileHasBeenSet() const { return m_templateFileHasBeenSet; }
    template<typename TemplateFileT = Aws::String>
    void SetTemplateFile(TemplateFileT&& value) { m_templateFileHasBeenSet = true; m_templateFile = std::forward<TemplateFileT>(value); }
    template<typename TemplateFileT = Aws::String>
    ComponentState& WithTemplateFile(TemplateFileT&& value) { SetTemplateFile(std::forward<TemplateFileT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_serviceInstanceName;
    bool m_serviceInstanceNameHasBeenSet = false;

    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet = false;

    Aws::String m_serviceSpec;
    bool m_serviceSpecHasBeenSet = false;

    Aws::String m_templateFile;
    bool m_templateFileHasBeenSet = false;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
