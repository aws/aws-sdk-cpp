/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   */
  class ModifyIntegrationRequest : public RDSRequest
  {
  public:
    AWS_RDS_API ModifyIntegrationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyIntegration"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The unique identifier of the integration to modify.</p>
     */
    inline const Aws::String& GetIntegrationIdentifier() const{ return m_integrationIdentifier; }

    /**
     * <p>The unique identifier of the integration to modify.</p>
     */
    inline bool IntegrationIdentifierHasBeenSet() const { return m_integrationIdentifierHasBeenSet; }

    /**
     * <p>The unique identifier of the integration to modify.</p>
     */
    inline void SetIntegrationIdentifier(const Aws::String& value) { m_integrationIdentifierHasBeenSet = true; m_integrationIdentifier = value; }

    /**
     * <p>The unique identifier of the integration to modify.</p>
     */
    inline void SetIntegrationIdentifier(Aws::String&& value) { m_integrationIdentifierHasBeenSet = true; m_integrationIdentifier = std::move(value); }

    /**
     * <p>The unique identifier of the integration to modify.</p>
     */
    inline void SetIntegrationIdentifier(const char* value) { m_integrationIdentifierHasBeenSet = true; m_integrationIdentifier.assign(value); }

    /**
     * <p>The unique identifier of the integration to modify.</p>
     */
    inline ModifyIntegrationRequest& WithIntegrationIdentifier(const Aws::String& value) { SetIntegrationIdentifier(value); return *this;}

    /**
     * <p>The unique identifier of the integration to modify.</p>
     */
    inline ModifyIntegrationRequest& WithIntegrationIdentifier(Aws::String&& value) { SetIntegrationIdentifier(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the integration to modify.</p>
     */
    inline ModifyIntegrationRequest& WithIntegrationIdentifier(const char* value) { SetIntegrationIdentifier(value); return *this;}


    /**
     * <p>A new name for the integration.</p>
     */
    inline const Aws::String& GetIntegrationName() const{ return m_integrationName; }

    /**
     * <p>A new name for the integration.</p>
     */
    inline bool IntegrationNameHasBeenSet() const { return m_integrationNameHasBeenSet; }

    /**
     * <p>A new name for the integration.</p>
     */
    inline void SetIntegrationName(const Aws::String& value) { m_integrationNameHasBeenSet = true; m_integrationName = value; }

    /**
     * <p>A new name for the integration.</p>
     */
    inline void SetIntegrationName(Aws::String&& value) { m_integrationNameHasBeenSet = true; m_integrationName = std::move(value); }

    /**
     * <p>A new name for the integration.</p>
     */
    inline void SetIntegrationName(const char* value) { m_integrationNameHasBeenSet = true; m_integrationName.assign(value); }

    /**
     * <p>A new name for the integration.</p>
     */
    inline ModifyIntegrationRequest& WithIntegrationName(const Aws::String& value) { SetIntegrationName(value); return *this;}

    /**
     * <p>A new name for the integration.</p>
     */
    inline ModifyIntegrationRequest& WithIntegrationName(Aws::String&& value) { SetIntegrationName(std::move(value)); return *this;}

    /**
     * <p>A new name for the integration.</p>
     */
    inline ModifyIntegrationRequest& WithIntegrationName(const char* value) { SetIntegrationName(value); return *this;}


    /**
     * <p>A new data filter for the integration. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_Zero_ETL_Filtering.html">Data
     * filtering for Aurora zero-ETL integrations with Amazon Redshift</a>.</p>
     */
    inline const Aws::String& GetDataFilter() const{ return m_dataFilter; }

    /**
     * <p>A new data filter for the integration. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_Zero_ETL_Filtering.html">Data
     * filtering for Aurora zero-ETL integrations with Amazon Redshift</a>.</p>
     */
    inline bool DataFilterHasBeenSet() const { return m_dataFilterHasBeenSet; }

    /**
     * <p>A new data filter for the integration. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_Zero_ETL_Filtering.html">Data
     * filtering for Aurora zero-ETL integrations with Amazon Redshift</a>.</p>
     */
    inline void SetDataFilter(const Aws::String& value) { m_dataFilterHasBeenSet = true; m_dataFilter = value; }

    /**
     * <p>A new data filter for the integration. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_Zero_ETL_Filtering.html">Data
     * filtering for Aurora zero-ETL integrations with Amazon Redshift</a>.</p>
     */
    inline void SetDataFilter(Aws::String&& value) { m_dataFilterHasBeenSet = true; m_dataFilter = std::move(value); }

    /**
     * <p>A new data filter for the integration. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_Zero_ETL_Filtering.html">Data
     * filtering for Aurora zero-ETL integrations with Amazon Redshift</a>.</p>
     */
    inline void SetDataFilter(const char* value) { m_dataFilterHasBeenSet = true; m_dataFilter.assign(value); }

    /**
     * <p>A new data filter for the integration. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_Zero_ETL_Filtering.html">Data
     * filtering for Aurora zero-ETL integrations with Amazon Redshift</a>.</p>
     */
    inline ModifyIntegrationRequest& WithDataFilter(const Aws::String& value) { SetDataFilter(value); return *this;}

    /**
     * <p>A new data filter for the integration. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_Zero_ETL_Filtering.html">Data
     * filtering for Aurora zero-ETL integrations with Amazon Redshift</a>.</p>
     */
    inline ModifyIntegrationRequest& WithDataFilter(Aws::String&& value) { SetDataFilter(std::move(value)); return *this;}

    /**
     * <p>A new data filter for the integration. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_Zero_ETL_Filtering.html">Data
     * filtering for Aurora zero-ETL integrations with Amazon Redshift</a>.</p>
     */
    inline ModifyIntegrationRequest& WithDataFilter(const char* value) { SetDataFilter(value); return *this;}


    /**
     * <p>A new description for the integration.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A new description for the integration.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A new description for the integration.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A new description for the integration.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A new description for the integration.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A new description for the integration.</p>
     */
    inline ModifyIntegrationRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A new description for the integration.</p>
     */
    inline ModifyIntegrationRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A new description for the integration.</p>
     */
    inline ModifyIntegrationRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    Aws::String m_integrationIdentifier;
    bool m_integrationIdentifierHasBeenSet = false;

    Aws::String m_integrationName;
    bool m_integrationNameHasBeenSet = false;

    Aws::String m_dataFilter;
    bool m_dataFilterHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
