﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/qbusiness/model/WebExperienceStatus.h>
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
   * <p>Provides information for an Amazon Q Business web experience.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/WebExperience">AWS
   * API Reference</a></p>
   */
  class WebExperience
  {
  public:
    AWS_QBUSINESS_API WebExperience();
    AWS_QBUSINESS_API WebExperience(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API WebExperience& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of your Amazon Q Business web experience.</p>
     */
    inline const Aws::String& GetWebExperienceId() const{ return m_webExperienceId; }
    inline bool WebExperienceIdHasBeenSet() const { return m_webExperienceIdHasBeenSet; }
    inline void SetWebExperienceId(const Aws::String& value) { m_webExperienceIdHasBeenSet = true; m_webExperienceId = value; }
    inline void SetWebExperienceId(Aws::String&& value) { m_webExperienceIdHasBeenSet = true; m_webExperienceId = std::move(value); }
    inline void SetWebExperienceId(const char* value) { m_webExperienceIdHasBeenSet = true; m_webExperienceId.assign(value); }
    inline WebExperience& WithWebExperienceId(const Aws::String& value) { SetWebExperienceId(value); return *this;}
    inline WebExperience& WithWebExperienceId(Aws::String&& value) { SetWebExperienceId(std::move(value)); return *this;}
    inline WebExperience& WithWebExperienceId(const char* value) { SetWebExperienceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp when the Amazon Q Business application was last
     * updated.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline WebExperience& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline WebExperience& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp when your Amazon Q Business web experience was
     * updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }
    inline WebExperience& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline WebExperience& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The endpoint URLs for your Amazon Q Business web experience. The URLs are
     * unique and fully hosted by Amazon Web Services.</p>
     */
    inline const Aws::String& GetDefaultEndpoint() const{ return m_defaultEndpoint; }
    inline bool DefaultEndpointHasBeenSet() const { return m_defaultEndpointHasBeenSet; }
    inline void SetDefaultEndpoint(const Aws::String& value) { m_defaultEndpointHasBeenSet = true; m_defaultEndpoint = value; }
    inline void SetDefaultEndpoint(Aws::String&& value) { m_defaultEndpointHasBeenSet = true; m_defaultEndpoint = std::move(value); }
    inline void SetDefaultEndpoint(const char* value) { m_defaultEndpointHasBeenSet = true; m_defaultEndpoint.assign(value); }
    inline WebExperience& WithDefaultEndpoint(const Aws::String& value) { SetDefaultEndpoint(value); return *this;}
    inline WebExperience& WithDefaultEndpoint(Aws::String&& value) { SetDefaultEndpoint(std::move(value)); return *this;}
    inline WebExperience& WithDefaultEndpoint(const char* value) { SetDefaultEndpoint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of your Amazon Q Business web experience.</p>
     */
    inline const WebExperienceStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const WebExperienceStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(WebExperienceStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline WebExperience& WithStatus(const WebExperienceStatus& value) { SetStatus(value); return *this;}
    inline WebExperience& WithStatus(WebExperienceStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_webExperienceId;
    bool m_webExperienceIdHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_defaultEndpoint;
    bool m_defaultEndpointHasBeenSet = false;

    WebExperienceStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
