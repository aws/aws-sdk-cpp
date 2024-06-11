﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/Theme.h>
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
  class DescribeThemeResult
  {
  public:
    AWS_QUICKSIGHT_API DescribeThemeResult();
    AWS_QUICKSIGHT_API DescribeThemeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API DescribeThemeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The information about the theme that you are describing.</p>
     */
    inline const Theme& GetTheme() const{ return m_theme; }
    inline void SetTheme(const Theme& value) { m_theme = value; }
    inline void SetTheme(Theme&& value) { m_theme = std::move(value); }
    inline DescribeThemeResult& WithTheme(const Theme& value) { SetTheme(value); return *this;}
    inline DescribeThemeResult& WithTheme(Theme&& value) { SetTheme(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const{ return m_status; }
    inline void SetStatus(int value) { m_status = value; }
    inline DescribeThemeResult& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeThemeResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeThemeResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeThemeResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Theme m_theme;

    int m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
