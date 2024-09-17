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


    ///@{
    /**
     * <p>The ID of the application.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline ApplicationSummary& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline ApplicationSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline ApplicationSummary& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the latest discovery.</p>
     */
    inline const ApplicationDiscoveryStatus& GetDiscoveryStatus() const{ return m_discoveryStatus; }
    inline bool DiscoveryStatusHasBeenSet() const { return m_discoveryStatusHasBeenSet; }
    inline void SetDiscoveryStatus(const ApplicationDiscoveryStatus& value) { m_discoveryStatusHasBeenSet = true; m_discoveryStatus = value; }
    inline void SetDiscoveryStatus(ApplicationDiscoveryStatus&& value) { m_discoveryStatusHasBeenSet = true; m_discoveryStatus = std::move(value); }
    inline ApplicationSummary& WithDiscoveryStatus(const ApplicationDiscoveryStatus& value) { SetDiscoveryStatus(value); return *this;}
    inline ApplicationSummary& WithDiscoveryStatus(ApplicationDiscoveryStatus&& value) { SetDiscoveryStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the application.</p>
     */
    inline const ApplicationType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const ApplicationType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(ApplicationType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline ApplicationSummary& WithType(const ApplicationType& value) { SetType(value); return *this;}
    inline ApplicationSummary& WithType(ApplicationType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline ApplicationSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline ApplicationSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline ApplicationSummary& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags on the application.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline ApplicationSummary& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline ApplicationSummary& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline ApplicationSummary& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline ApplicationSummary& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline ApplicationSummary& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline ApplicationSummary& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline ApplicationSummary& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline ApplicationSummary& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline ApplicationSummary& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}
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
