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
    AWS_PROTON_API ComponentState();
    AWS_PROTON_API ComponentState(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROTON_API ComponentState& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROTON_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the service instance that this component is attached to. Provided
     * when a component is attached to a service instance.</p>
     */
    inline const Aws::String& GetServiceInstanceName() const{ return m_serviceInstanceName; }

    /**
     * <p>The name of the service instance that this component is attached to. Provided
     * when a component is attached to a service instance.</p>
     */
    inline bool ServiceInstanceNameHasBeenSet() const { return m_serviceInstanceNameHasBeenSet; }

    /**
     * <p>The name of the service instance that this component is attached to. Provided
     * when a component is attached to a service instance.</p>
     */
    inline void SetServiceInstanceName(const Aws::String& value) { m_serviceInstanceNameHasBeenSet = true; m_serviceInstanceName = value; }

    /**
     * <p>The name of the service instance that this component is attached to. Provided
     * when a component is attached to a service instance.</p>
     */
    inline void SetServiceInstanceName(Aws::String&& value) { m_serviceInstanceNameHasBeenSet = true; m_serviceInstanceName = std::move(value); }

    /**
     * <p>The name of the service instance that this component is attached to. Provided
     * when a component is attached to a service instance.</p>
     */
    inline void SetServiceInstanceName(const char* value) { m_serviceInstanceNameHasBeenSet = true; m_serviceInstanceName.assign(value); }

    /**
     * <p>The name of the service instance that this component is attached to. Provided
     * when a component is attached to a service instance.</p>
     */
    inline ComponentState& WithServiceInstanceName(const Aws::String& value) { SetServiceInstanceName(value); return *this;}

    /**
     * <p>The name of the service instance that this component is attached to. Provided
     * when a component is attached to a service instance.</p>
     */
    inline ComponentState& WithServiceInstanceName(Aws::String&& value) { SetServiceInstanceName(std::move(value)); return *this;}

    /**
     * <p>The name of the service instance that this component is attached to. Provided
     * when a component is attached to a service instance.</p>
     */
    inline ComponentState& WithServiceInstanceName(const char* value) { SetServiceInstanceName(value); return *this;}


    /**
     * <p>The name of the service that <code>serviceInstanceName</code> is associated
     * with. Provided when a component is attached to a service instance.</p>
     */
    inline const Aws::String& GetServiceName() const{ return m_serviceName; }

    /**
     * <p>The name of the service that <code>serviceInstanceName</code> is associated
     * with. Provided when a component is attached to a service instance.</p>
     */
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }

    /**
     * <p>The name of the service that <code>serviceInstanceName</code> is associated
     * with. Provided when a component is attached to a service instance.</p>
     */
    inline void SetServiceName(const Aws::String& value) { m_serviceNameHasBeenSet = true; m_serviceName = value; }

    /**
     * <p>The name of the service that <code>serviceInstanceName</code> is associated
     * with. Provided when a component is attached to a service instance.</p>
     */
    inline void SetServiceName(Aws::String&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::move(value); }

    /**
     * <p>The name of the service that <code>serviceInstanceName</code> is associated
     * with. Provided when a component is attached to a service instance.</p>
     */
    inline void SetServiceName(const char* value) { m_serviceNameHasBeenSet = true; m_serviceName.assign(value); }

    /**
     * <p>The name of the service that <code>serviceInstanceName</code> is associated
     * with. Provided when a component is attached to a service instance.</p>
     */
    inline ComponentState& WithServiceName(const Aws::String& value) { SetServiceName(value); return *this;}

    /**
     * <p>The name of the service that <code>serviceInstanceName</code> is associated
     * with. Provided when a component is attached to a service instance.</p>
     */
    inline ComponentState& WithServiceName(Aws::String&& value) { SetServiceName(std::move(value)); return *this;}

    /**
     * <p>The name of the service that <code>serviceInstanceName</code> is associated
     * with. Provided when a component is attached to a service instance.</p>
     */
    inline ComponentState& WithServiceName(const char* value) { SetServiceName(value); return *this;}


    /**
     * <p>The service spec that the component uses to access service inputs. Provided
     * when a component is attached to a service instance.</p>
     */
    inline const Aws::String& GetServiceSpec() const{ return m_serviceSpec; }

    /**
     * <p>The service spec that the component uses to access service inputs. Provided
     * when a component is attached to a service instance.</p>
     */
    inline bool ServiceSpecHasBeenSet() const { return m_serviceSpecHasBeenSet; }

    /**
     * <p>The service spec that the component uses to access service inputs. Provided
     * when a component is attached to a service instance.</p>
     */
    inline void SetServiceSpec(const Aws::String& value) { m_serviceSpecHasBeenSet = true; m_serviceSpec = value; }

    /**
     * <p>The service spec that the component uses to access service inputs. Provided
     * when a component is attached to a service instance.</p>
     */
    inline void SetServiceSpec(Aws::String&& value) { m_serviceSpecHasBeenSet = true; m_serviceSpec = std::move(value); }

    /**
     * <p>The service spec that the component uses to access service inputs. Provided
     * when a component is attached to a service instance.</p>
     */
    inline void SetServiceSpec(const char* value) { m_serviceSpecHasBeenSet = true; m_serviceSpec.assign(value); }

    /**
     * <p>The service spec that the component uses to access service inputs. Provided
     * when a component is attached to a service instance.</p>
     */
    inline ComponentState& WithServiceSpec(const Aws::String& value) { SetServiceSpec(value); return *this;}

    /**
     * <p>The service spec that the component uses to access service inputs. Provided
     * when a component is attached to a service instance.</p>
     */
    inline ComponentState& WithServiceSpec(Aws::String&& value) { SetServiceSpec(std::move(value)); return *this;}

    /**
     * <p>The service spec that the component uses to access service inputs. Provided
     * when a component is attached to a service instance.</p>
     */
    inline ComponentState& WithServiceSpec(const char* value) { SetServiceSpec(value); return *this;}


    /**
     * <p>The template file used.</p>
     */
    inline const Aws::String& GetTemplateFile() const{ return m_templateFile; }

    /**
     * <p>The template file used.</p>
     */
    inline bool TemplateFileHasBeenSet() const { return m_templateFileHasBeenSet; }

    /**
     * <p>The template file used.</p>
     */
    inline void SetTemplateFile(const Aws::String& value) { m_templateFileHasBeenSet = true; m_templateFile = value; }

    /**
     * <p>The template file used.</p>
     */
    inline void SetTemplateFile(Aws::String&& value) { m_templateFileHasBeenSet = true; m_templateFile = std::move(value); }

    /**
     * <p>The template file used.</p>
     */
    inline void SetTemplateFile(const char* value) { m_templateFileHasBeenSet = true; m_templateFile.assign(value); }

    /**
     * <p>The template file used.</p>
     */
    inline ComponentState& WithTemplateFile(const Aws::String& value) { SetTemplateFile(value); return *this;}

    /**
     * <p>The template file used.</p>
     */
    inline ComponentState& WithTemplateFile(Aws::String&& value) { SetTemplateFile(std::move(value)); return *this;}

    /**
     * <p>The template file used.</p>
     */
    inline ComponentState& WithTemplateFile(const char* value) { SetTemplateFile(value); return *this;}

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
