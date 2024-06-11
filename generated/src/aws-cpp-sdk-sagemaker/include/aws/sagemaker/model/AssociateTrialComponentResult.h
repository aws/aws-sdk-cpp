﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
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
namespace SageMaker
{
namespace Model
{
  class AssociateTrialComponentResult
  {
  public:
    AWS_SAGEMAKER_API AssociateTrialComponentResult();
    AWS_SAGEMAKER_API AssociateTrialComponentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API AssociateTrialComponentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the trial component.</p>
     */
    inline const Aws::String& GetTrialComponentArn() const{ return m_trialComponentArn; }
    inline void SetTrialComponentArn(const Aws::String& value) { m_trialComponentArn = value; }
    inline void SetTrialComponentArn(Aws::String&& value) { m_trialComponentArn = std::move(value); }
    inline void SetTrialComponentArn(const char* value) { m_trialComponentArn.assign(value); }
    inline AssociateTrialComponentResult& WithTrialComponentArn(const Aws::String& value) { SetTrialComponentArn(value); return *this;}
    inline AssociateTrialComponentResult& WithTrialComponentArn(Aws::String&& value) { SetTrialComponentArn(std::move(value)); return *this;}
    inline AssociateTrialComponentResult& WithTrialComponentArn(const char* value) { SetTrialComponentArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the trial.</p>
     */
    inline const Aws::String& GetTrialArn() const{ return m_trialArn; }
    inline void SetTrialArn(const Aws::String& value) { m_trialArn = value; }
    inline void SetTrialArn(Aws::String&& value) { m_trialArn = std::move(value); }
    inline void SetTrialArn(const char* value) { m_trialArn.assign(value); }
    inline AssociateTrialComponentResult& WithTrialArn(const Aws::String& value) { SetTrialArn(value); return *this;}
    inline AssociateTrialComponentResult& WithTrialArn(Aws::String&& value) { SetTrialArn(std::move(value)); return *this;}
    inline AssociateTrialComponentResult& WithTrialArn(const char* value) { SetTrialArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline AssociateTrialComponentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline AssociateTrialComponentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline AssociateTrialComponentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_trialComponentArn;

    Aws::String m_trialArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
