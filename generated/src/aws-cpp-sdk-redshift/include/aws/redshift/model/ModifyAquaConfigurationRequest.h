/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/RedshiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/redshift/model/AquaConfigurationStatus.h>
#include <utility>

namespace Aws
{
namespace Redshift
{
namespace Model
{

  /**
   */
  class ModifyAquaConfigurationRequest : public RedshiftRequest
  {
  public:
    AWS_REDSHIFT_API ModifyAquaConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyAquaConfiguration"; }

    AWS_REDSHIFT_API Aws::String SerializePayload() const override;

  protected:
    AWS_REDSHIFT_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The identifier of the cluster to be modified.</p>
     */
    inline const Aws::String& GetClusterIdentifier() const{ return m_clusterIdentifier; }

    /**
     * <p>The identifier of the cluster to be modified.</p>
     */
    inline bool ClusterIdentifierHasBeenSet() const { return m_clusterIdentifierHasBeenSet; }

    /**
     * <p>The identifier of the cluster to be modified.</p>
     */
    inline void SetClusterIdentifier(const Aws::String& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = value; }

    /**
     * <p>The identifier of the cluster to be modified.</p>
     */
    inline void SetClusterIdentifier(Aws::String&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = std::move(value); }

    /**
     * <p>The identifier of the cluster to be modified.</p>
     */
    inline void SetClusterIdentifier(const char* value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier.assign(value); }

    /**
     * <p>The identifier of the cluster to be modified.</p>
     */
    inline ModifyAquaConfigurationRequest& WithClusterIdentifier(const Aws::String& value) { SetClusterIdentifier(value); return *this;}

    /**
     * <p>The identifier of the cluster to be modified.</p>
     */
    inline ModifyAquaConfigurationRequest& WithClusterIdentifier(Aws::String&& value) { SetClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the cluster to be modified.</p>
     */
    inline ModifyAquaConfigurationRequest& WithClusterIdentifier(const char* value) { SetClusterIdentifier(value); return *this;}


    /**
     * <p>This parameter is retired. Amazon Redshift automatically determines whether
     * to use AQUA (Advanced Query Accelerator).</p>
     */
    inline const AquaConfigurationStatus& GetAquaConfigurationStatus() const{ return m_aquaConfigurationStatus; }

    /**
     * <p>This parameter is retired. Amazon Redshift automatically determines whether
     * to use AQUA (Advanced Query Accelerator).</p>
     */
    inline bool AquaConfigurationStatusHasBeenSet() const { return m_aquaConfigurationStatusHasBeenSet; }

    /**
     * <p>This parameter is retired. Amazon Redshift automatically determines whether
     * to use AQUA (Advanced Query Accelerator).</p>
     */
    inline void SetAquaConfigurationStatus(const AquaConfigurationStatus& value) { m_aquaConfigurationStatusHasBeenSet = true; m_aquaConfigurationStatus = value; }

    /**
     * <p>This parameter is retired. Amazon Redshift automatically determines whether
     * to use AQUA (Advanced Query Accelerator).</p>
     */
    inline void SetAquaConfigurationStatus(AquaConfigurationStatus&& value) { m_aquaConfigurationStatusHasBeenSet = true; m_aquaConfigurationStatus = std::move(value); }

    /**
     * <p>This parameter is retired. Amazon Redshift automatically determines whether
     * to use AQUA (Advanced Query Accelerator).</p>
     */
    inline ModifyAquaConfigurationRequest& WithAquaConfigurationStatus(const AquaConfigurationStatus& value) { SetAquaConfigurationStatus(value); return *this;}

    /**
     * <p>This parameter is retired. Amazon Redshift automatically determines whether
     * to use AQUA (Advanced Query Accelerator).</p>
     */
    inline ModifyAquaConfigurationRequest& WithAquaConfigurationStatus(AquaConfigurationStatus&& value) { SetAquaConfigurationStatus(std::move(value)); return *this;}

  private:

    Aws::String m_clusterIdentifier;
    bool m_clusterIdentifierHasBeenSet = false;

    AquaConfigurationStatus m_aquaConfigurationStatus;
    bool m_aquaConfigurationStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
