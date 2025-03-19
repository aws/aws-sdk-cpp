/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog-appregistry/AppRegistry_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/servicecatalog-appregistry/model/ResourceIntegrations.h>
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
namespace AppRegistry
{
namespace Model
{

  /**
   * <p> The information about the resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/AWS242AppRegistry-2020-06-24/Resource">AWS
   * API Reference</a></p>
   */
  class Resource
  {
  public:
    AWS_APPREGISTRY_API Resource() = default;
    AWS_APPREGISTRY_API Resource(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPREGISTRY_API Resource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPREGISTRY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the resource.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Resource& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon resource name (ARN) of the resource.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    Resource& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the resource was associated with the application.</p>
     */
    inline const Aws::Utils::DateTime& GetAssociationTime() const { return m_associationTime; }
    inline bool AssociationTimeHasBeenSet() const { return m_associationTimeHasBeenSet; }
    template<typename AssociationTimeT = Aws::Utils::DateTime>
    void SetAssociationTime(AssociationTimeT&& value) { m_associationTimeHasBeenSet = true; m_associationTime = std::forward<AssociationTimeT>(value); }
    template<typename AssociationTimeT = Aws::Utils::DateTime>
    Resource& WithAssociationTime(AssociationTimeT&& value) { SetAssociationTime(std::forward<AssociationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The service integration information about the resource. </p>
     */
    inline const ResourceIntegrations& GetIntegrations() const { return m_integrations; }
    inline bool IntegrationsHasBeenSet() const { return m_integrationsHasBeenSet; }
    template<typename IntegrationsT = ResourceIntegrations>
    void SetIntegrations(IntegrationsT&& value) { m_integrationsHasBeenSet = true; m_integrations = std::forward<IntegrationsT>(value); }
    template<typename IntegrationsT = ResourceIntegrations>
    Resource& WithIntegrations(IntegrationsT&& value) { SetIntegrations(std::forward<IntegrationsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_associationTime{};
    bool m_associationTimeHasBeenSet = false;

    ResourceIntegrations m_integrations;
    bool m_integrationsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRegistry
} // namespace Aws
