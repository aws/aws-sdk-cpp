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
  class UpdateRecommenderResult
  {
  public:
    AWS_PERSONALIZE_API UpdateRecommenderResult();
    AWS_PERSONALIZE_API UpdateRecommenderResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PERSONALIZE_API UpdateRecommenderResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The same recommender Amazon Resource Name (ARN) as given in the request.</p>
     */
    inline const Aws::String& GetRecommenderArn() const{ return m_recommenderArn; }
    inline void SetRecommenderArn(const Aws::String& value) { m_recommenderArn = value; }
    inline void SetRecommenderArn(Aws::String&& value) { m_recommenderArn = std::move(value); }
    inline void SetRecommenderArn(const char* value) { m_recommenderArn.assign(value); }
    inline UpdateRecommenderResult& WithRecommenderArn(const Aws::String& value) { SetRecommenderArn(value); return *this;}
    inline UpdateRecommenderResult& WithRecommenderArn(Aws::String&& value) { SetRecommenderArn(std::move(value)); return *this;}
    inline UpdateRecommenderResult& WithRecommenderArn(const char* value) { SetRecommenderArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateRecommenderResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateRecommenderResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateRecommenderResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_recommenderArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
