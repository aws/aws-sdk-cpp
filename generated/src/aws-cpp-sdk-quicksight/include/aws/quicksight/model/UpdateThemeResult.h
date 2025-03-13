/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/ResourceStatus.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace QuickSight
{
namespace Model
{
  class UpdateThemeResult
  {
  public:
    AWS_QUICKSIGHT_API UpdateThemeResult() = default;
    AWS_QUICKSIGHT_API UpdateThemeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API UpdateThemeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID for the theme.</p>
     */
    inline const Aws::String& GetThemeId() const { return m_themeId; }
    template<typename ThemeIdT = Aws::String>
    void SetThemeId(ThemeIdT&& value) { m_themeIdHasBeenSet = true; m_themeId = std::forward<ThemeIdT>(value); }
    template<typename ThemeIdT = Aws::String>
    UpdateThemeResult& WithThemeId(ThemeIdT&& value) { SetThemeId(std::forward<ThemeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the theme.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    UpdateThemeResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the new version of the theme.</p>
     */
    inline const Aws::String& GetVersionArn() const { return m_versionArn; }
    template<typename VersionArnT = Aws::String>
    void SetVersionArn(VersionArnT&& value) { m_versionArnHasBeenSet = true; m_versionArn = std::forward<VersionArnT>(value); }
    template<typename VersionArnT = Aws::String>
    UpdateThemeResult& WithVersionArn(VersionArnT&& value) { SetVersionArn(std::forward<VersionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation status of the theme.</p>
     */
    inline ResourceStatus GetCreationStatus() const { return m_creationStatus; }
    inline void SetCreationStatus(ResourceStatus value) { m_creationStatusHasBeenSet = true; m_creationStatus = value; }
    inline UpdateThemeResult& WithCreationStatus(ResourceStatus value) { SetCreationStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const { return m_status; }
    inline void SetStatus(int value) { m_statusHasBeenSet = true; m_status = value; }
    inline UpdateThemeResult& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateThemeResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_themeId;
    bool m_themeIdHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_versionArn;
    bool m_versionArnHasBeenSet = false;

    ResourceStatus m_creationStatus{ResourceStatus::NOT_SET};
    bool m_creationStatusHasBeenSet = false;

    int m_status{0};
    bool m_statusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
