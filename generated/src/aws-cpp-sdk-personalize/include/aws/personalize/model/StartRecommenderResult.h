﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
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
namespace Personalize
{
namespace Model
{
  class StartRecommenderResult
  {
  public:
    AWS_PERSONALIZE_API StartRecommenderResult();
    AWS_PERSONALIZE_API StartRecommenderResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PERSONALIZE_API StartRecommenderResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the recommender you started.</p>
     */
    inline const Aws::String& GetRecommenderArn() const{ return m_recommenderArn; }
    inline void SetRecommenderArn(const Aws::String& value) { m_recommenderArn = value; }
    inline void SetRecommenderArn(Aws::String&& value) { m_recommenderArn = std::move(value); }
    inline void SetRecommenderArn(const char* value) { m_recommenderArn.assign(value); }
    inline StartRecommenderResult& WithRecommenderArn(const Aws::String& value) { SetRecommenderArn(value); return *this;}
    inline StartRecommenderResult& WithRecommenderArn(Aws::String&& value) { SetRecommenderArn(std::move(value)); return *this;}
    inline StartRecommenderResult& WithRecommenderArn(const char* value) { SetRecommenderArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline StartRecommenderResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline StartRecommenderResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline StartRecommenderResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_recommenderArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
