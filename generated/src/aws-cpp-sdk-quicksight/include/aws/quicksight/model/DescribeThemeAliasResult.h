/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ThemeAlias.h>
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
  class DescribeThemeAliasResult
  {
  public:
    AWS_QUICKSIGHT_API DescribeThemeAliasResult();
    AWS_QUICKSIGHT_API DescribeThemeAliasResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API DescribeThemeAliasResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the theme alias.</p>
     */
    inline const ThemeAlias& GetThemeAlias() const{ return m_themeAlias; }

    /**
     * <p>Information about the theme alias.</p>
     */
    inline void SetThemeAlias(const ThemeAlias& value) { m_themeAlias = value; }

    /**
     * <p>Information about the theme alias.</p>
     */
    inline void SetThemeAlias(ThemeAlias&& value) { m_themeAlias = std::move(value); }

    /**
     * <p>Information about the theme alias.</p>
     */
    inline DescribeThemeAliasResult& WithThemeAlias(const ThemeAlias& value) { SetThemeAlias(value); return *this;}

    /**
     * <p>Information about the theme alias.</p>
     */
    inline DescribeThemeAliasResult& WithThemeAlias(ThemeAlias&& value) { SetThemeAlias(std::move(value)); return *this;}


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
    inline DescribeThemeAliasResult& WithStatus(int value) { SetStatus(value); return *this;}


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
    inline DescribeThemeAliasResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline DescribeThemeAliasResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline DescribeThemeAliasResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ThemeAlias m_themeAlias;

    int m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
