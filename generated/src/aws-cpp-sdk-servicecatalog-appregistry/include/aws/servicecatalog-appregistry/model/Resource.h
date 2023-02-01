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
    AWS_APPREGISTRY_API Resource();
    AWS_APPREGISTRY_API Resource(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPREGISTRY_API Resource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPREGISTRY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the resource.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the resource.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the resource.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the resource.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the resource.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the resource.</p>
     */
    inline Resource& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the resource.</p>
     */
    inline Resource& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the resource.</p>
     */
    inline Resource& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Amazon resource name (ARN) of the resource.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon resource name (ARN) of the resource.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon resource name (ARN) of the resource.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon resource name (ARN) of the resource.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon resource name (ARN) of the resource.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon resource name (ARN) of the resource.</p>
     */
    inline Resource& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon resource name (ARN) of the resource.</p>
     */
    inline Resource& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon resource name (ARN) of the resource.</p>
     */
    inline Resource& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The time the resource was associated with the application.</p>
     */
    inline const Aws::Utils::DateTime& GetAssociationTime() const{ return m_associationTime; }

    /**
     * <p>The time the resource was associated with the application.</p>
     */
    inline bool AssociationTimeHasBeenSet() const { return m_associationTimeHasBeenSet; }

    /**
     * <p>The time the resource was associated with the application.</p>
     */
    inline void SetAssociationTime(const Aws::Utils::DateTime& value) { m_associationTimeHasBeenSet = true; m_associationTime = value; }

    /**
     * <p>The time the resource was associated with the application.</p>
     */
    inline void SetAssociationTime(Aws::Utils::DateTime&& value) { m_associationTimeHasBeenSet = true; m_associationTime = std::move(value); }

    /**
     * <p>The time the resource was associated with the application.</p>
     */
    inline Resource& WithAssociationTime(const Aws::Utils::DateTime& value) { SetAssociationTime(value); return *this;}

    /**
     * <p>The time the resource was associated with the application.</p>
     */
    inline Resource& WithAssociationTime(Aws::Utils::DateTime&& value) { SetAssociationTime(std::move(value)); return *this;}


    /**
     * <p>The service integration information about the resource. </p>
     */
    inline const ResourceIntegrations& GetIntegrations() const{ return m_integrations; }

    /**
     * <p>The service integration information about the resource. </p>
     */
    inline bool IntegrationsHasBeenSet() const { return m_integrationsHasBeenSet; }

    /**
     * <p>The service integration information about the resource. </p>
     */
    inline void SetIntegrations(const ResourceIntegrations& value) { m_integrationsHasBeenSet = true; m_integrations = value; }

    /**
     * <p>The service integration information about the resource. </p>
     */
    inline void SetIntegrations(ResourceIntegrations&& value) { m_integrationsHasBeenSet = true; m_integrations = std::move(value); }

    /**
     * <p>The service integration information about the resource. </p>
     */
    inline Resource& WithIntegrations(const ResourceIntegrations& value) { SetIntegrations(value); return *this;}

    /**
     * <p>The service integration information about the resource. </p>
     */
    inline Resource& WithIntegrations(ResourceIntegrations&& value) { SetIntegrations(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_associationTime;
    bool m_associationTimeHasBeenSet = false;

    ResourceIntegrations m_integrations;
    bool m_integrationsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRegistry
} // namespace Aws
