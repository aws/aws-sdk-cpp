/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/s3control/model/AsyncOperationName.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3control/model/AsyncRequestParameters.h>
#include <aws/s3control/model/AsyncResponseDetails.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace S3Control
{
namespace Model
{

  /**
   * <p>A container for the information about an asynchronous
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/AsyncOperation">AWS
   * API Reference</a></p>
   */
  class AsyncOperation
  {
  public:
    AWS_S3CONTROL_API AsyncOperation();
    AWS_S3CONTROL_API AsyncOperation(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API AsyncOperation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The time that the request was sent to the service.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time that the request was sent to the service.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The time that the request was sent to the service.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The time that the request was sent to the service.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The time that the request was sent to the service.</p>
     */
    inline AsyncOperation& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time that the request was sent to the service.</p>
     */
    inline AsyncOperation& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The specific operation for the asynchronous request.</p>
     */
    inline const AsyncOperationName& GetOperation() const{ return m_operation; }

    /**
     * <p>The specific operation for the asynchronous request.</p>
     */
    inline bool OperationHasBeenSet() const { return m_operationHasBeenSet; }

    /**
     * <p>The specific operation for the asynchronous request.</p>
     */
    inline void SetOperation(const AsyncOperationName& value) { m_operationHasBeenSet = true; m_operation = value; }

    /**
     * <p>The specific operation for the asynchronous request.</p>
     */
    inline void SetOperation(AsyncOperationName&& value) { m_operationHasBeenSet = true; m_operation = std::move(value); }

    /**
     * <p>The specific operation for the asynchronous request.</p>
     */
    inline AsyncOperation& WithOperation(const AsyncOperationName& value) { SetOperation(value); return *this;}

    /**
     * <p>The specific operation for the asynchronous request.</p>
     */
    inline AsyncOperation& WithOperation(AsyncOperationName&& value) { SetOperation(std::move(value)); return *this;}


    /**
     * <p>The request token associated with the request.</p>
     */
    inline const Aws::String& GetRequestTokenARN() const{ return m_requestTokenARN; }

    /**
     * <p>The request token associated with the request.</p>
     */
    inline bool RequestTokenARNHasBeenSet() const { return m_requestTokenARNHasBeenSet; }

    /**
     * <p>The request token associated with the request.</p>
     */
    inline void SetRequestTokenARN(const Aws::String& value) { m_requestTokenARNHasBeenSet = true; m_requestTokenARN = value; }

    /**
     * <p>The request token associated with the request.</p>
     */
    inline void SetRequestTokenARN(Aws::String&& value) { m_requestTokenARNHasBeenSet = true; m_requestTokenARN = std::move(value); }

    /**
     * <p>The request token associated with the request.</p>
     */
    inline void SetRequestTokenARN(const char* value) { m_requestTokenARNHasBeenSet = true; m_requestTokenARN.assign(value); }

    /**
     * <p>The request token associated with the request.</p>
     */
    inline AsyncOperation& WithRequestTokenARN(const Aws::String& value) { SetRequestTokenARN(value); return *this;}

    /**
     * <p>The request token associated with the request.</p>
     */
    inline AsyncOperation& WithRequestTokenARN(Aws::String&& value) { SetRequestTokenARN(std::move(value)); return *this;}

    /**
     * <p>The request token associated with the request.</p>
     */
    inline AsyncOperation& WithRequestTokenARN(const char* value) { SetRequestTokenARN(value); return *this;}


    /**
     * <p>The parameters associated with the request.</p>
     */
    inline const AsyncRequestParameters& GetRequestParameters() const{ return m_requestParameters; }

    /**
     * <p>The parameters associated with the request.</p>
     */
    inline bool RequestParametersHasBeenSet() const { return m_requestParametersHasBeenSet; }

    /**
     * <p>The parameters associated with the request.</p>
     */
    inline void SetRequestParameters(const AsyncRequestParameters& value) { m_requestParametersHasBeenSet = true; m_requestParameters = value; }

    /**
     * <p>The parameters associated with the request.</p>
     */
    inline void SetRequestParameters(AsyncRequestParameters&& value) { m_requestParametersHasBeenSet = true; m_requestParameters = std::move(value); }

    /**
     * <p>The parameters associated with the request.</p>
     */
    inline AsyncOperation& WithRequestParameters(const AsyncRequestParameters& value) { SetRequestParameters(value); return *this;}

    /**
     * <p>The parameters associated with the request.</p>
     */
    inline AsyncOperation& WithRequestParameters(AsyncRequestParameters&& value) { SetRequestParameters(std::move(value)); return *this;}


    /**
     * <p>The current status of the request.</p>
     */
    inline const Aws::String& GetRequestStatus() const{ return m_requestStatus; }

    /**
     * <p>The current status of the request.</p>
     */
    inline bool RequestStatusHasBeenSet() const { return m_requestStatusHasBeenSet; }

    /**
     * <p>The current status of the request.</p>
     */
    inline void SetRequestStatus(const Aws::String& value) { m_requestStatusHasBeenSet = true; m_requestStatus = value; }

    /**
     * <p>The current status of the request.</p>
     */
    inline void SetRequestStatus(Aws::String&& value) { m_requestStatusHasBeenSet = true; m_requestStatus = std::move(value); }

    /**
     * <p>The current status of the request.</p>
     */
    inline void SetRequestStatus(const char* value) { m_requestStatusHasBeenSet = true; m_requestStatus.assign(value); }

    /**
     * <p>The current status of the request.</p>
     */
    inline AsyncOperation& WithRequestStatus(const Aws::String& value) { SetRequestStatus(value); return *this;}

    /**
     * <p>The current status of the request.</p>
     */
    inline AsyncOperation& WithRequestStatus(Aws::String&& value) { SetRequestStatus(std::move(value)); return *this;}

    /**
     * <p>The current status of the request.</p>
     */
    inline AsyncOperation& WithRequestStatus(const char* value) { SetRequestStatus(value); return *this;}


    /**
     * <p>The details of the response.</p>
     */
    inline const AsyncResponseDetails& GetResponseDetails() const{ return m_responseDetails; }

    /**
     * <p>The details of the response.</p>
     */
    inline bool ResponseDetailsHasBeenSet() const { return m_responseDetailsHasBeenSet; }

    /**
     * <p>The details of the response.</p>
     */
    inline void SetResponseDetails(const AsyncResponseDetails& value) { m_responseDetailsHasBeenSet = true; m_responseDetails = value; }

    /**
     * <p>The details of the response.</p>
     */
    inline void SetResponseDetails(AsyncResponseDetails&& value) { m_responseDetailsHasBeenSet = true; m_responseDetails = std::move(value); }

    /**
     * <p>The details of the response.</p>
     */
    inline AsyncOperation& WithResponseDetails(const AsyncResponseDetails& value) { SetResponseDetails(value); return *this;}

    /**
     * <p>The details of the response.</p>
     */
    inline AsyncOperation& WithResponseDetails(AsyncResponseDetails&& value) { SetResponseDetails(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    AsyncOperationName m_operation;
    bool m_operationHasBeenSet = false;

    Aws::String m_requestTokenARN;
    bool m_requestTokenARNHasBeenSet = false;

    AsyncRequestParameters m_requestParameters;
    bool m_requestParametersHasBeenSet = false;

    Aws::String m_requestStatus;
    bool m_requestStatusHasBeenSet = false;

    AsyncResponseDetails m_responseDetails;
    bool m_responseDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
