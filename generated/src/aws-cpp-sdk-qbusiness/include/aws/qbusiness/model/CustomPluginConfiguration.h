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
    AWS_QBUSINESS_API CustomPluginConfiguration() = default;
    AWS_QBUSINESS_API CustomPluginConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API CustomPluginConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A description for your custom plugin configuration.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CustomPluginConfiguration& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of OpenAPI schema to use.</p>
     */
    inline APISchemaType GetApiSchemaType() const { return m_apiSchemaType; }
    inline bool ApiSchemaTypeHasBeenSet() const { return m_apiSchemaTypeHasBeenSet; }
    inline void SetApiSchemaType(APISchemaType value) { m_apiSchemaTypeHasBeenSet = true; m_apiSchemaType = value; }
    inline CustomPluginConfiguration& WithApiSchemaType(APISchemaType value) { SetApiSchemaType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains either details about the S3 object containing the OpenAPI schema for
     * the action group or the JSON or YAML-formatted payload defining the schema.</p>
     */
    inline const APISchema& GetApiSchema() const { return m_apiSchema; }
    inline bool ApiSchemaHasBeenSet() const { return m_apiSchemaHasBeenSet; }
    template<typename ApiSchemaT = APISchema>
    void SetApiSchema(ApiSchemaT&& value) { m_apiSchemaHasBeenSet = true; m_apiSchema = std::forward<ApiSchemaT>(value); }
    template<typename ApiSchemaT = APISchema>
    CustomPluginConfiguration& WithApiSchema(ApiSchemaT&& value) { SetApiSchema(std::forward<ApiSchemaT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    APISchemaType m_apiSchemaType{APISchemaType::NOT_SET};
    bool m_apiSchemaTypeHasBeenSet = false;

    APISchema m_apiSchema;
    bool m_apiSchemaHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
