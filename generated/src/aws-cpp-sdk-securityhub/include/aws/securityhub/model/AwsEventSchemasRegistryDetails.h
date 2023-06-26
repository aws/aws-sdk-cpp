/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p> A schema defines the structure of events that are sent to Amazon
   * EventBridge. Schema registries are containers for schemas. They collect and
   * organize schemas so that your schemas are in logical groups. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEventSchemasRegistryDetails">AWS
   * API Reference</a></p>
   */
  class AwsEventSchemasRegistryDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEventSchemasRegistryDetails();
    AWS_SECURITYHUB_API AwsEventSchemasRegistryDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEventSchemasRegistryDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> A description of the registry to be created. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p> A description of the registry to be created. </p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p> A description of the registry to be created. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p> A description of the registry to be created. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p> A description of the registry to be created. </p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p> A description of the registry to be created. </p>
     */
    inline AwsEventSchemasRegistryDetails& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p> A description of the registry to be created. </p>
     */
    inline AwsEventSchemasRegistryDetails& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p> A description of the registry to be created. </p>
     */
    inline AwsEventSchemasRegistryDetails& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p> The Amazon Resource Name (ARN) of the registry. </p>
     */
    inline const Aws::String& GetRegistryArn() const{ return m_registryArn; }

    /**
     * <p> The Amazon Resource Name (ARN) of the registry. </p>
     */
    inline bool RegistryArnHasBeenSet() const { return m_registryArnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) of the registry. </p>
     */
    inline void SetRegistryArn(const Aws::String& value) { m_registryArnHasBeenSet = true; m_registryArn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of the registry. </p>
     */
    inline void SetRegistryArn(Aws::String&& value) { m_registryArnHasBeenSet = true; m_registryArn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the registry. </p>
     */
    inline void SetRegistryArn(const char* value) { m_registryArnHasBeenSet = true; m_registryArn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the registry. </p>
     */
    inline AwsEventSchemasRegistryDetails& WithRegistryArn(const Aws::String& value) { SetRegistryArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the registry. </p>
     */
    inline AwsEventSchemasRegistryDetails& WithRegistryArn(Aws::String&& value) { SetRegistryArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the registry. </p>
     */
    inline AwsEventSchemasRegistryDetails& WithRegistryArn(const char* value) { SetRegistryArn(value); return *this;}


    /**
     * <p> The name of the schema registry. </p>
     */
    inline const Aws::String& GetRegistryName() const{ return m_registryName; }

    /**
     * <p> The name of the schema registry. </p>
     */
    inline bool RegistryNameHasBeenSet() const { return m_registryNameHasBeenSet; }

    /**
     * <p> The name of the schema registry. </p>
     */
    inline void SetRegistryName(const Aws::String& value) { m_registryNameHasBeenSet = true; m_registryName = value; }

    /**
     * <p> The name of the schema registry. </p>
     */
    inline void SetRegistryName(Aws::String&& value) { m_registryNameHasBeenSet = true; m_registryName = std::move(value); }

    /**
     * <p> The name of the schema registry. </p>
     */
    inline void SetRegistryName(const char* value) { m_registryNameHasBeenSet = true; m_registryName.assign(value); }

    /**
     * <p> The name of the schema registry. </p>
     */
    inline AwsEventSchemasRegistryDetails& WithRegistryName(const Aws::String& value) { SetRegistryName(value); return *this;}

    /**
     * <p> The name of the schema registry. </p>
     */
    inline AwsEventSchemasRegistryDetails& WithRegistryName(Aws::String&& value) { SetRegistryName(std::move(value)); return *this;}

    /**
     * <p> The name of the schema registry. </p>
     */
    inline AwsEventSchemasRegistryDetails& WithRegistryName(const char* value) { SetRegistryName(value); return *this;}

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_registryArn;
    bool m_registryArnHasBeenSet = false;

    Aws::String m_registryName;
    bool m_registryNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
