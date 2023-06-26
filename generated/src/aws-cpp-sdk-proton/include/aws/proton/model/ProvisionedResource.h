/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/proton/model/ProvisionedResourceEngine.h>
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
   * <p>Detail data for a provisioned resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/ProvisionedResource">AWS
   * API Reference</a></p>
   */
  class ProvisionedResource
  {
  public:
    AWS_PROTON_API ProvisionedResource();
    AWS_PROTON_API ProvisionedResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROTON_API ProvisionedResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROTON_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The provisioned resource identifier.</p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }

    /**
     * <p>The provisioned resource identifier.</p>
     */
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }

    /**
     * <p>The provisioned resource identifier.</p>
     */
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }

    /**
     * <p>The provisioned resource identifier.</p>
     */
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }

    /**
     * <p>The provisioned resource identifier.</p>
     */
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }

    /**
     * <p>The provisioned resource identifier.</p>
     */
    inline ProvisionedResource& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}

    /**
     * <p>The provisioned resource identifier.</p>
     */
    inline ProvisionedResource& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}

    /**
     * <p>The provisioned resource identifier.</p>
     */
    inline ProvisionedResource& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}


    /**
     * <p>The provisioned resource name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The provisioned resource name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The provisioned resource name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The provisioned resource name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The provisioned resource name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The provisioned resource name.</p>
     */
    inline ProvisionedResource& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The provisioned resource name.</p>
     */
    inline ProvisionedResource& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The provisioned resource name.</p>
     */
    inline ProvisionedResource& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The resource provisioning engine. At this time, <code>CLOUDFORMATION</code>
     * can be used for Amazon Web Services-managed provisioning, and
     * <code>TERRAFORM</code> can be used for self-managed provisioning.</p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-works-prov-methods.html#ag-works-prov-methods-self">Self-managed
     * provisioning</a> in the <i>Proton User Guide</i>.</p>
     */
    inline const ProvisionedResourceEngine& GetProvisioningEngine() const{ return m_provisioningEngine; }

    /**
     * <p>The resource provisioning engine. At this time, <code>CLOUDFORMATION</code>
     * can be used for Amazon Web Services-managed provisioning, and
     * <code>TERRAFORM</code> can be used for self-managed provisioning.</p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-works-prov-methods.html#ag-works-prov-methods-self">Self-managed
     * provisioning</a> in the <i>Proton User Guide</i>.</p>
     */
    inline bool ProvisioningEngineHasBeenSet() const { return m_provisioningEngineHasBeenSet; }

    /**
     * <p>The resource provisioning engine. At this time, <code>CLOUDFORMATION</code>
     * can be used for Amazon Web Services-managed provisioning, and
     * <code>TERRAFORM</code> can be used for self-managed provisioning.</p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-works-prov-methods.html#ag-works-prov-methods-self">Self-managed
     * provisioning</a> in the <i>Proton User Guide</i>.</p>
     */
    inline void SetProvisioningEngine(const ProvisionedResourceEngine& value) { m_provisioningEngineHasBeenSet = true; m_provisioningEngine = value; }

    /**
     * <p>The resource provisioning engine. At this time, <code>CLOUDFORMATION</code>
     * can be used for Amazon Web Services-managed provisioning, and
     * <code>TERRAFORM</code> can be used for self-managed provisioning.</p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-works-prov-methods.html#ag-works-prov-methods-self">Self-managed
     * provisioning</a> in the <i>Proton User Guide</i>.</p>
     */
    inline void SetProvisioningEngine(ProvisionedResourceEngine&& value) { m_provisioningEngineHasBeenSet = true; m_provisioningEngine = std::move(value); }

    /**
     * <p>The resource provisioning engine. At this time, <code>CLOUDFORMATION</code>
     * can be used for Amazon Web Services-managed provisioning, and
     * <code>TERRAFORM</code> can be used for self-managed provisioning.</p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-works-prov-methods.html#ag-works-prov-methods-self">Self-managed
     * provisioning</a> in the <i>Proton User Guide</i>.</p>
     */
    inline ProvisionedResource& WithProvisioningEngine(const ProvisionedResourceEngine& value) { SetProvisioningEngine(value); return *this;}

    /**
     * <p>The resource provisioning engine. At this time, <code>CLOUDFORMATION</code>
     * can be used for Amazon Web Services-managed provisioning, and
     * <code>TERRAFORM</code> can be used for self-managed provisioning.</p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-works-prov-methods.html#ag-works-prov-methods-self">Self-managed
     * provisioning</a> in the <i>Proton User Guide</i>.</p>
     */
    inline ProvisionedResource& WithProvisioningEngine(ProvisionedResourceEngine&& value) { SetProvisioningEngine(std::move(value)); return *this;}

  private:

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ProvisionedResourceEngine m_provisioningEngine;
    bool m_provisioningEngineHasBeenSet = false;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
