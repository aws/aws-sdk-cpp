/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class DeleteThemeAliasResult
  {
  public:
    AWS_QUICKSIGHT_API DeleteThemeAliasResult() = default;
    AWS_QUICKSIGHT_API DeleteThemeAliasResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API DeleteThemeAliasResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name for the theme alias.</p>
     */
    inline const Aws::String& GetAliasName() const { return m_aliasName; }
    template<typename AliasNameT = Aws::String>
    void SetAliasName(AliasNameT&& value) { m_aliasNameHasBeenSet = true; m_aliasName = std::forward<AliasNameT>(value); }
    template<typename AliasNameT = Aws::String>
    DeleteThemeAliasResult& WithAliasName(AliasNameT&& value) { SetAliasName(std::forward<AliasNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the theme resource using the deleted
     * alias.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    DeleteThemeAliasResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeleteThemeAliasResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const { return m_status; }
    inline void SetStatus(int value) { m_statusHasBeenSet = true; m_status = value; }
    inline DeleteThemeAliasResult& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An ID for the theme associated with the deletion.</p>
     */
    inline const Aws::String& GetThemeId() const { return m_themeId; }
    template<typename ThemeIdT = Aws::String>
    void SetThemeId(ThemeIdT&& value) { m_themeIdHasBeenSet = true; m_themeId = std::forward<ThemeIdT>(value); }
    template<typename ThemeIdT = Aws::String>
    DeleteThemeAliasResult& WithThemeId(ThemeIdT&& value) { SetThemeId(std::forward<ThemeIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_aliasName;
    bool m_aliasNameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    int m_status{0};
    bool m_statusHasBeenSet = false;

    Aws::String m_themeId;
    bool m_themeIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
