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
    AWS_QUICKSIGHT_API DeleteThemeAliasResult();
    AWS_QUICKSIGHT_API DeleteThemeAliasResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API DeleteThemeAliasResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name for the theme alias.</p>
     */
    inline const Aws::String& GetAliasName() const{ return m_aliasName; }
    inline void SetAliasName(const Aws::String& value) { m_aliasName = value; }
    inline void SetAliasName(Aws::String&& value) { m_aliasName = std::move(value); }
    inline void SetAliasName(const char* value) { m_aliasName.assign(value); }
    inline DeleteThemeAliasResult& WithAliasName(const Aws::String& value) { SetAliasName(value); return *this;}
    inline DeleteThemeAliasResult& WithAliasName(Aws::String&& value) { SetAliasName(std::move(value)); return *this;}
    inline DeleteThemeAliasResult& WithAliasName(const char* value) { SetAliasName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the theme resource using the deleted
     * alias.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline DeleteThemeAliasResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline DeleteThemeAliasResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline DeleteThemeAliasResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DeleteThemeAliasResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DeleteThemeAliasResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DeleteThemeAliasResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const{ return m_status; }
    inline void SetStatus(int value) { m_status = value; }
    inline DeleteThemeAliasResult& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An ID for the theme associated with the deletion.</p>
     */
    inline const Aws::String& GetThemeId() const{ return m_themeId; }
    inline void SetThemeId(const Aws::String& value) { m_themeId = value; }
    inline void SetThemeId(Aws::String&& value) { m_themeId = std::move(value); }
    inline void SetThemeId(const char* value) { m_themeId.assign(value); }
    inline DeleteThemeAliasResult& WithThemeId(const Aws::String& value) { SetThemeId(value); return *this;}
    inline DeleteThemeAliasResult& WithThemeId(Aws::String&& value) { SetThemeId(std::move(value)); return *this;}
    inline DeleteThemeAliasResult& WithThemeId(const char* value) { SetThemeId(value); return *this;}
    ///@}
  private:

    Aws::String m_aliasName;

    Aws::String m_arn;

    Aws::String m_requestId;

    int m_status;

    Aws::String m_themeId;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
