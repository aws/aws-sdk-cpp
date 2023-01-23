/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
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
namespace ServiceCatalog
{
namespace Model
{

  /**
   * <p>Provisioning artifact output.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ProvisioningArtifactOutput">AWS
   * API Reference</a></p>
   */
  class ProvisioningArtifactOutput
  {
  public:
    AWS_SERVICECATALOG_API ProvisioningArtifactOutput();
    AWS_SERVICECATALOG_API ProvisioningArtifactOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API ProvisioningArtifactOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The provisioning artifact output key.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The provisioning artifact output key.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The provisioning artifact output key.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The provisioning artifact output key.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The provisioning artifact output key.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The provisioning artifact output key.</p>
     */
    inline ProvisioningArtifactOutput& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The provisioning artifact output key.</p>
     */
    inline ProvisioningArtifactOutput& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The provisioning artifact output key.</p>
     */
    inline ProvisioningArtifactOutput& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>Description of the provisioning artifact output key.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Description of the provisioning artifact output key.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>Description of the provisioning artifact output key.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Description of the provisioning artifact output key.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>Description of the provisioning artifact output key.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>Description of the provisioning artifact output key.</p>
     */
    inline ProvisioningArtifactOutput& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Description of the provisioning artifact output key.</p>
     */
    inline ProvisioningArtifactOutput& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Description of the provisioning artifact output key.</p>
     */
    inline ProvisioningArtifactOutput& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
