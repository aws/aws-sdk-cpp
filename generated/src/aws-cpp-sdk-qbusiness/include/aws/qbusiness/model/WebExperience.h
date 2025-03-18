/**
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
    AWS_QBUSINESS_API WebExperience() = default;
    AWS_QBUSINESS_API WebExperience(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API WebExperience& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of your Amazon Q Business web experience.</p>
     */
    inline const Aws::String& GetWebExperienceId() const { return m_webExperienceId; }
    inline bool WebExperienceIdHasBeenSet() const { return m_webExperienceIdHasBeenSet; }
    template<typename WebExperienceIdT = Aws::String>
    void SetWebExperienceId(WebExperienceIdT&& value) { m_webExperienceIdHasBeenSet = true; m_webExperienceId = std::forward<WebExperienceIdT>(value); }
    template<typename WebExperienceIdT = Aws::String>
    WebExperience& WithWebExperienceId(WebExperienceIdT&& value) { SetWebExperienceId(std::forward<WebExperienceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp when the Amazon Q Business application was last
     * updated.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    WebExperience& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp when your Amazon Q Business web experience was
     * updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    WebExperience& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The endpoint URLs for your Amazon Q Business web experience. The URLs are
     * unique and fully hosted by Amazon Web Services.</p>
     */
    inline const Aws::String& GetDefaultEndpoint() const { return m_defaultEndpoint; }
    inline bool DefaultEndpointHasBeenSet() const { return m_defaultEndpointHasBeenSet; }
    template<typename DefaultEndpointT = Aws::String>
    void SetDefaultEndpoint(DefaultEndpointT&& value) { m_defaultEndpointHasBeenSet = true; m_defaultEndpoint = std::forward<DefaultEndpointT>(value); }
    template<typename DefaultEndpointT = Aws::String>
    WebExperience& WithDefaultEndpoint(DefaultEndpointT&& value) { SetDefaultEndpoint(std::forward<DefaultEndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of your Amazon Q Business web experience.</p>
     */
    inline WebExperienceStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(WebExperienceStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline WebExperience& WithStatus(WebExperienceStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_webExperienceId;
    bool m_webExperienceIdHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_defaultEndpoint;
    bool m_defaultEndpointHasBeenSet = false;

    WebExperienceStatus m_status{WebExperienceStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
