﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-groups/ResourceGroups_EXPORTS.h>
#include <aws/resource-groups/model/QueryErrorCode.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ResourceGroups
{
namespace Model
{

  /**
   * <p>A two-part error structure that can occur in <code>ListGroupResources</code>
   * or <code>SearchResources</code>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/QueryError">AWS
   * API Reference</a></p>
   */
  class QueryError
  {
  public:
    AWS_RESOURCEGROUPS_API QueryError();
    AWS_RESOURCEGROUPS_API QueryError(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESOURCEGROUPS_API QueryError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESOURCEGROUPS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the error code that was raised.</p>
     */
    inline const QueryErrorCode& GetErrorCode() const{ return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    inline void SetErrorCode(const QueryErrorCode& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }
    inline void SetErrorCode(QueryErrorCode&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }
    inline QueryError& WithErrorCode(const QueryErrorCode& value) { SetErrorCode(value); return *this;}
    inline QueryError& WithErrorCode(QueryErrorCode&& value) { SetErrorCode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message that explains the <code>ErrorCode</code>. </p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline QueryError& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline QueryError& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline QueryError& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}
  private:

    QueryErrorCode m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace ResourceGroups
} // namespace Aws
