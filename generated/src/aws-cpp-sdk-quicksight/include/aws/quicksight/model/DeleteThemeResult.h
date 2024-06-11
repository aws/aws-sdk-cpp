﻿/**
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
  class DeleteThemeResult
  {
  public:
    AWS_QUICKSIGHT_API DeleteThemeResult();
    AWS_QUICKSIGHT_API DeleteThemeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API DeleteThemeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline DeleteThemeResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline DeleteThemeResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline DeleteThemeResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DeleteThemeResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DeleteThemeResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DeleteThemeResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const{ return m_status; }
    inline void SetStatus(int value) { m_status = value; }
    inline DeleteThemeResult& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An ID for the theme.</p>
     */
    inline const Aws::String& GetThemeId() const{ return m_themeId; }
    inline void SetThemeId(const Aws::String& value) { m_themeId = value; }
    inline void SetThemeId(Aws::String&& value) { m_themeId = std::move(value); }
    inline void SetThemeId(const char* value) { m_themeId.assign(value); }
    inline DeleteThemeResult& WithThemeId(const Aws::String& value) { SetThemeId(value); return *this;}
    inline DeleteThemeResult& WithThemeId(Aws::String&& value) { SetThemeId(std::move(value)); return *this;}
    inline DeleteThemeResult& WithThemeId(const char* value) { SetThemeId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    Aws::String m_requestId;

    int m_status;

    Aws::String m_themeId;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
