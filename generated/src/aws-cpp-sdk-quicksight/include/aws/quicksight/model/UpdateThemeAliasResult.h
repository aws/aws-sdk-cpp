﻿/**
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
  class UpdateThemeAliasResult
  {
  public:
    AWS_QUICKSIGHT_API UpdateThemeAliasResult();
    AWS_QUICKSIGHT_API UpdateThemeAliasResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API UpdateThemeAliasResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the theme alias.</p>
     */
    inline const ThemeAlias& GetThemeAlias() const{ return m_themeAlias; }
    inline void SetThemeAlias(const ThemeAlias& value) { m_themeAlias = value; }
    inline void SetThemeAlias(ThemeAlias&& value) { m_themeAlias = std::move(value); }
    inline UpdateThemeAliasResult& WithThemeAlias(const ThemeAlias& value) { SetThemeAlias(value); return *this;}
    inline UpdateThemeAliasResult& WithThemeAlias(ThemeAlias&& value) { SetThemeAlias(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const{ return m_status; }
    inline void SetStatus(int value) { m_status = value; }
    inline UpdateThemeAliasResult& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateThemeAliasResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateThemeAliasResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateThemeAliasResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    ThemeAlias m_themeAlias;

    int m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
