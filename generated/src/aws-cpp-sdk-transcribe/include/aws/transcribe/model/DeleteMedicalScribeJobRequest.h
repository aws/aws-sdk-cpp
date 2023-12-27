/**
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
  class DeleteMedicalScribeJobRequest : public TranscribeServiceRequest
  {
  public:
    AWS_TRANSCRIBESERVICE_API DeleteMedicalScribeJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteMedicalScribeJob"; }

    AWS_TRANSCRIBESERVICE_API Aws::String SerializePayload() const override;

    AWS_TRANSCRIBESERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the Medical Scribe job you want to delete. Job names are case
     * sensitive.</p>
     */
    inline const Aws::String& GetMedicalScribeJobName() const{ return m_medicalScribeJobName; }

    /**
     * <p>The name of the Medical Scribe job you want to delete. Job names are case
     * sensitive.</p>
     */
    inline bool MedicalScribeJobNameHasBeenSet() const { return m_medicalScribeJobNameHasBeenSet; }

    /**
     * <p>The name of the Medical Scribe job you want to delete. Job names are case
     * sensitive.</p>
     */
    inline void SetMedicalScribeJobName(const Aws::String& value) { m_medicalScribeJobNameHasBeenSet = true; m_medicalScribeJobName = value; }

    /**
     * <p>The name of the Medical Scribe job you want to delete. Job names are case
     * sensitive.</p>
     */
    inline void SetMedicalScribeJobName(Aws::String&& value) { m_medicalScribeJobNameHasBeenSet = true; m_medicalScribeJobName = std::move(value); }

    /**
     * <p>The name of the Medical Scribe job you want to delete. Job names are case
     * sensitive.</p>
     */
    inline void SetMedicalScribeJobName(const char* value) { m_medicalScribeJobNameHasBeenSet = true; m_medicalScribeJobName.assign(value); }

    /**
     * <p>The name of the Medical Scribe job you want to delete. Job names are case
     * sensitive.</p>
     */
    inline DeleteMedicalScribeJobRequest& WithMedicalScribeJobName(const Aws::String& value) { SetMedicalScribeJobName(value); return *this;}

    /**
     * <p>The name of the Medical Scribe job you want to delete. Job names are case
     * sensitive.</p>
     */
    inline DeleteMedicalScribeJobRequest& WithMedicalScribeJobName(Aws::String&& value) { SetMedicalScribeJobName(std::move(value)); return *this;}

    /**
     * <p>The name of the Medical Scribe job you want to delete. Job names are case
     * sensitive.</p>
     */
    inline DeleteMedicalScribeJobRequest& WithMedicalScribeJobName(const char* value) { SetMedicalScribeJobName(value); return *this;}

  private:

    Aws::String m_medicalScribeJobName;
    bool m_medicalScribeJobNameHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
