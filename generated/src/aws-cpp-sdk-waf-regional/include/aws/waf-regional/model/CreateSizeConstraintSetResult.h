﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf-regional/WAFRegional_EXPORTS.h>
#include <aws/waf-regional/model/SizeConstraintSet.h>
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
namespace WAFRegional
{
namespace Model
{
  class CreateSizeConstraintSetResult
  {
  public:
    AWS_WAFREGIONAL_API CreateSizeConstraintSetResult();
    AWS_WAFREGIONAL_API CreateSizeConstraintSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAFREGIONAL_API CreateSizeConstraintSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A <a>SizeConstraintSet</a> that contains no <code>SizeConstraint</code>
     * objects.</p>
     */
    inline const SizeConstraintSet& GetSizeConstraintSet() const{ return m_sizeConstraintSet; }
    inline void SetSizeConstraintSet(const SizeConstraintSet& value) { m_sizeConstraintSet = value; }
    inline void SetSizeConstraintSet(SizeConstraintSet&& value) { m_sizeConstraintSet = std::move(value); }
    inline CreateSizeConstraintSetResult& WithSizeConstraintSet(const SizeConstraintSet& value) { SetSizeConstraintSet(value); return *this;}
    inline CreateSizeConstraintSetResult& WithSizeConstraintSet(SizeConstraintSet&& value) { SetSizeConstraintSet(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>ChangeToken</code> that you used to submit the
     * <code>CreateSizeConstraintSet</code> request. You can also use this value to
     * query the status of the request. For more information, see
     * <a>GetChangeTokenStatus</a>.</p>
     */
    inline const Aws::String& GetChangeToken() const{ return m_changeToken; }
    inline void SetChangeToken(const Aws::String& value) { m_changeToken = value; }
    inline void SetChangeToken(Aws::String&& value) { m_changeToken = std::move(value); }
    inline void SetChangeToken(const char* value) { m_changeToken.assign(value); }
    inline CreateSizeConstraintSetResult& WithChangeToken(const Aws::String& value) { SetChangeToken(value); return *this;}
    inline CreateSizeConstraintSetResult& WithChangeToken(Aws::String&& value) { SetChangeToken(std::move(value)); return *this;}
    inline CreateSizeConstraintSetResult& WithChangeToken(const char* value) { SetChangeToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateSizeConstraintSetResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateSizeConstraintSetResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateSizeConstraintSetResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    SizeConstraintSet m_sizeConstraintSet;

    Aws::String m_changeToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
