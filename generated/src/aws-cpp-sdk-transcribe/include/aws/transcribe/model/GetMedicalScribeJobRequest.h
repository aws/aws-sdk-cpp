﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/transcribe/TranscribeServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace TranscribeService
{
namespace Model
{

  /**
   */
  class GetMedicalScribeJobRequest : public TranscribeServiceRequest
  {
  public:
    AWS_TRANSCRIBESERVICE_API GetMedicalScribeJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetMedicalScribeJob"; }

    AWS_TRANSCRIBESERVICE_API Aws::String SerializePayload() const override;

    AWS_TRANSCRIBESERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the Medical Scribe job you want information about. Job names are
     * case sensitive.</p>
     */
    inline const Aws::String& GetMedicalScribeJobName() const{ return m_medicalScribeJobName; }
    inline bool MedicalScribeJobNameHasBeenSet() const { return m_medicalScribeJobNameHasBeenSet; }
    inline void SetMedicalScribeJobName(const Aws::String& value) { m_medicalScribeJobNameHasBeenSet = true; m_medicalScribeJobName = value; }
    inline void SetMedicalScribeJobName(Aws::String&& value) { m_medicalScribeJobNameHasBeenSet = true; m_medicalScribeJobName = std::move(value); }
    inline void SetMedicalScribeJobName(const char* value) { m_medicalScribeJobNameHasBeenSet = true; m_medicalScribeJobName.assign(value); }
    inline GetMedicalScribeJobRequest& WithMedicalScribeJobName(const Aws::String& value) { SetMedicalScribeJobName(value); return *this;}
    inline GetMedicalScribeJobRequest& WithMedicalScribeJobName(Aws::String&& value) { SetMedicalScribeJobName(std::move(value)); return *this;}
    inline GetMedicalScribeJobRequest& WithMedicalScribeJobName(const char* value) { SetMedicalScribeJobName(value); return *this;}
    ///@}
  private:

    Aws::String m_medicalScribeJobName;
    bool m_medicalScribeJobNameHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
