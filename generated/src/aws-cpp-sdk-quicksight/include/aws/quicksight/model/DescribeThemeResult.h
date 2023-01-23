/**
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


    /**
     * <p>The information about the theme that you are describing.</p>
     */
    inline const Theme& GetTheme() const{ return m_theme; }

    /**
     * <p>The information about the theme that you are describing.</p>
     */
    inline void SetTheme(const Theme& value) { m_theme = value; }

    /**
     * <p>The information about the theme that you are describing.</p>
     */
    inline void SetTheme(Theme&& value) { m_theme = std::move(value); }

    /**
     * <p>The information about the theme that you are describing.</p>
     */
    inline DescribeThemeResult& WithTheme(const Theme& value) { SetTheme(value); return *this;}

    /**
     * <p>The information about the theme that you are describing.</p>
     */
    inline DescribeThemeResult& WithTheme(Theme&& value) { SetTheme(std::move(value)); return *this;}


    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const{ return m_status; }

    /**
     * <p>The HTTP status of the request.</p>
     */
    inline void SetStatus(int value) { m_status = value; }

    /**
     * <p>The HTTP status of the request.</p>
     */
    inline DescribeThemeResult& WithStatus(int value) { SetStatus(value); return *this;}


    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline DescribeThemeResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline DescribeThemeResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline DescribeThemeResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Theme m_theme;

    int m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
