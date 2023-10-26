/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-sap/SsmSap_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm-sap/model/ApplicationDiscoveryStatus.h>
#include <aws/ssm-sap/model/ApplicationType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace SsmSap
{
namespace Model
{

  /**
   * <p>The summary of the SAP application registered with AWS Systems Manager for
   * SAP. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-sap-2018-05-10/ApplicationSummary">AWS
   * API Reference</a></p>
   */
  class ApplicationSummary
  {
  public:
    AWS_SSMSAP_API ApplicationSummary();
    AWS_SSMSAP_API ApplicationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMSAP_API ApplicationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMSAP_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the application.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the application.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the application.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the application.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the application.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the application.</p>
     */
    inline ApplicationSummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the application.</p>
     */
    inline ApplicationSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the application.</p>
     */
    inline ApplicationSummary& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The status of the latest discovery.</p>
     */
    inline const ApplicationDiscoveryStatus& GetDiscoveryStatus() const{ return m_discoveryStatus; }

    /**
     * <p>The status of the latest discovery.</p>
     */
    inline bool DiscoveryStatusHasBeenSet() const { return m_discoveryStatusHasBeenSet; }

    /**
     * <p>The status of the latest discovery.</p>
     */
    inline void SetDiscoveryStatus(const ApplicationDiscoveryStatus& value) { m_discoveryStatusHasBeenSet = true; m_discoveryStatus = value; }

    /**
     * <p>The status of the latest discovery.</p>
     */
    inline void SetDiscoveryStatus(ApplicationDiscoveryStatus&& value) { m_discoveryStatusHasBeenSet = true; m_discoveryStatus = std::move(value); }

    /**
     * <p>The status of the latest discovery.</p>
     */
    inline ApplicationSummary& WithDiscoveryStatus(const ApplicationDiscoveryStatus& value) { SetDiscoveryStatus(value); return *this;}

    /**
     * <p>The status of the latest discovery.</p>
     */
    inline ApplicationSummary& WithDiscoveryStatus(ApplicationDiscoveryStatus&& value) { SetDiscoveryStatus(std::move(value)); return *this;}


    /**
     * <p>The type of the application.</p>
     */
    inline const ApplicationType& GetType() const{ return m_type; }

    /**
     * <p>The type of the application.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the application.</p>
     */
    inline void SetType(const ApplicationType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the application.</p>
     */
    inline void SetType(ApplicationType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the application.</p>
     */
    inline ApplicationSummary& WithType(const ApplicationType& value) { SetType(value); return *this;}

    /**
     * <p>The type of the application.</p>
     */
    inline ApplicationSummary& WithType(ApplicationType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline ApplicationSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline ApplicationSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline ApplicationSummary& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The tags on the application.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags on the application.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags on the application.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags on the application.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags on the application.</p>
     */
    inline ApplicationSummary& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags on the application.</p>
     */
    inline ApplicationSummary& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags on the application.</p>
     */
    inline ApplicationSummary& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags on the application.</p>
     */
    inline ApplicationSummary& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags on the application.</p>
     */
    inline ApplicationSummary& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags on the application.</p>
     */
    inline ApplicationSummary& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags on the application.</p>
     */
    inline ApplicationSummary& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags on the application.</p>
     */
    inline ApplicationSummary& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags on the application.</p>
     */
    inline ApplicationSummary& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    ApplicationDiscoveryStatus m_discoveryStatus;
    bool m_discoveryStatusHasBeenSet = false;

    ApplicationType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace SsmSap
} // namespace Aws
