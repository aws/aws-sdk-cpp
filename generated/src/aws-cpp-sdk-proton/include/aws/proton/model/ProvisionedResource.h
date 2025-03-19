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
    AWS_PROTON_API ProvisionedResource() = default;
    AWS_PROTON_API ProvisionedResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROTON_API ProvisionedResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROTON_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The provisioned resource identifier.</p>
     */
    inline const Aws::String& GetIdentifier() const { return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    template<typename IdentifierT = Aws::String>
    void SetIdentifier(IdentifierT&& value) { m_identifierHasBeenSet = true; m_identifier = std::forward<IdentifierT>(value); }
    template<typename IdentifierT = Aws::String>
    ProvisionedResource& WithIdentifier(IdentifierT&& value) { SetIdentifier(std::forward<IdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The provisioned resource name.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ProvisionedResource& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource provisioning engine. At this time, <code>CLOUDFORMATION</code>
     * can be used for Amazon Web Services-managed provisioning, and
     * <code>TERRAFORM</code> can be used for self-managed provisioning.</p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-works-prov-methods.html#ag-works-prov-methods-self">Self-managed
     * provisioning</a> in the <i>Proton User Guide</i>.</p>
     */
    inline ProvisionedResourceEngine GetProvisioningEngine() const { return m_provisioningEngine; }
    inline bool ProvisioningEngineHasBeenSet() const { return m_provisioningEngineHasBeenSet; }
    inline void SetProvisioningEngine(ProvisionedResourceEngine value) { m_provisioningEngineHasBeenSet = true; m_provisioningEngine = value; }
    inline ProvisionedResource& WithProvisioningEngine(ProvisionedResourceEngine value) { SetProvisioningEngine(value); return *this;}
    ///@}
  private:

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ProvisionedResourceEngine m_provisioningEngine{ProvisionedResourceEngine::NOT_SET};
    bool m_provisioningEngineHasBeenSet = false;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
