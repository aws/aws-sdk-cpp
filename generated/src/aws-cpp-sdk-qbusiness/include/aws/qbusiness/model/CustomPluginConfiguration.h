/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qbusiness/model/APISchemaType.h>
#include <aws/qbusiness/model/APISchema.h>
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
namespace QBusiness
{
namespace Model
{

  /**
   * <p> Configuration information required to create a custom plugin.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/CustomPluginConfiguration">AWS
   * API Reference</a></p>
   */
  class CustomPluginConfiguration
  {
  public:
    AWS_QBUSINESS_API CustomPluginConfiguration();
    AWS_QBUSINESS_API CustomPluginConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API CustomPluginConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A description for your custom plugin configuration.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description for your custom plugin configuration.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description for your custom plugin configuration.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description for your custom plugin configuration.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description for your custom plugin configuration.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description for your custom plugin configuration.</p>
     */
    inline CustomPluginConfiguration& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description for your custom plugin configuration.</p>
     */
    inline CustomPluginConfiguration& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description for your custom plugin configuration.</p>
     */
    inline CustomPluginConfiguration& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The type of OpenAPI schema to use.</p>
     */
    inline const APISchemaType& GetApiSchemaType() const{ return m_apiSchemaType; }

    /**
     * <p>The type of OpenAPI schema to use.</p>
     */
    inline bool ApiSchemaTypeHasBeenSet() const { return m_apiSchemaTypeHasBeenSet; }

    /**
     * <p>The type of OpenAPI schema to use.</p>
     */
    inline void SetApiSchemaType(const APISchemaType& value) { m_apiSchemaTypeHasBeenSet = true; m_apiSchemaType = value; }

    /**
     * <p>The type of OpenAPI schema to use.</p>
     */
    inline void SetApiSchemaType(APISchemaType&& value) { m_apiSchemaTypeHasBeenSet = true; m_apiSchemaType = std::move(value); }

    /**
     * <p>The type of OpenAPI schema to use.</p>
     */
    inline CustomPluginConfiguration& WithApiSchemaType(const APISchemaType& value) { SetApiSchemaType(value); return *this;}

    /**
     * <p>The type of OpenAPI schema to use.</p>
     */
    inline CustomPluginConfiguration& WithApiSchemaType(APISchemaType&& value) { SetApiSchemaType(std::move(value)); return *this;}


    /**
     * <p>Contains either details about the S3 object containing the OpenAPI schema for
     * the action group or the JSON or YAML-formatted payload defining the schema.</p>
     */
    inline const APISchema& GetApiSchema() const{ return m_apiSchema; }

    /**
     * <p>Contains either details about the S3 object containing the OpenAPI schema for
     * the action group or the JSON or YAML-formatted payload defining the schema.</p>
     */
    inline bool ApiSchemaHasBeenSet() const { return m_apiSchemaHasBeenSet; }

    /**
     * <p>Contains either details about the S3 object containing the OpenAPI schema for
     * the action group or the JSON or YAML-formatted payload defining the schema.</p>
     */
    inline void SetApiSchema(const APISchema& value) { m_apiSchemaHasBeenSet = true; m_apiSchema = value; }

    /**
     * <p>Contains either details about the S3 object containing the OpenAPI schema for
     * the action group or the JSON or YAML-formatted payload defining the schema.</p>
     */
    inline void SetApiSchema(APISchema&& value) { m_apiSchemaHasBeenSet = true; m_apiSchema = std::move(value); }

    /**
     * <p>Contains either details about the S3 object containing the OpenAPI schema for
     * the action group or the JSON or YAML-formatted payload defining the schema.</p>
     */
    inline CustomPluginConfiguration& WithApiSchema(const APISchema& value) { SetApiSchema(value); return *this;}

    /**
     * <p>Contains either details about the S3 object containing the OpenAPI schema for
     * the action group or the JSON or YAML-formatted payload defining the schema.</p>
     */
    inline CustomPluginConfiguration& WithApiSchema(APISchema&& value) { SetApiSchema(std::move(value)); return *this;}

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    APISchemaType m_apiSchemaType;
    bool m_apiSchemaTypeHasBeenSet = false;

    APISchema m_apiSchema;
    bool m_apiSchemaHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
