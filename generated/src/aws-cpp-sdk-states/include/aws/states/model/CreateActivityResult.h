﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFN_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace SFN
{
namespace Model
{
  class CreateActivityResult
  {
  public:
    AWS_SFN_API CreateActivityResult();
    AWS_SFN_API CreateActivityResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SFN_API CreateActivityResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that identifies the created activity.</p>
     */
    inline const Aws::String& GetActivityArn() const{ return m_activityArn; }
    inline void SetActivityArn(const Aws::String& value) { m_activityArn = value; }
    inline void SetActivityArn(Aws::String&& value) { m_activityArn = std::move(value); }
    inline void SetActivityArn(const char* value) { m_activityArn.assign(value); }
    inline CreateActivityResult& WithActivityArn(const Aws::String& value) { SetActivityArn(value); return *this;}
    inline CreateActivityResult& WithActivityArn(Aws::String&& value) { SetActivityArn(std::move(value)); return *this;}
    inline CreateActivityResult& WithActivityArn(const char* value) { SetActivityArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the activity is created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDate = value; }
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDate = std::move(value); }
    inline CreateActivityResult& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}
    inline CreateActivityResult& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateActivityResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateActivityResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateActivityResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_activityArn;

    Aws::Utils::DateTime m_creationDate;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
