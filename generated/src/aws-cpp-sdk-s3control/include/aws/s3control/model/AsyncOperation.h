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
    AWS_S3CONTROL_API AsyncOperation() = default;
    AWS_S3CONTROL_API AsyncOperation(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API AsyncOperation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The time that the request was sent to the service.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    AsyncOperation& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The specific operation for the asynchronous request.</p>
     */
    inline AsyncOperationName GetOperation() const { return m_operation; }
    inline bool OperationHasBeenSet() const { return m_operationHasBeenSet; }
    inline void SetOperation(AsyncOperationName value) { m_operationHasBeenSet = true; m_operation = value; }
    inline AsyncOperation& WithOperation(AsyncOperationName value) { SetOperation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The request token associated with the request.</p>
     */
    inline const Aws::String& GetRequestTokenARN() const { return m_requestTokenARN; }
    inline bool RequestTokenARNHasBeenSet() const { return m_requestTokenARNHasBeenSet; }
    template<typename RequestTokenARNT = Aws::String>
    void SetRequestTokenARN(RequestTokenARNT&& value) { m_requestTokenARNHasBeenSet = true; m_requestTokenARN = std::forward<RequestTokenARNT>(value); }
    template<typename RequestTokenARNT = Aws::String>
    AsyncOperation& WithRequestTokenARN(RequestTokenARNT&& value) { SetRequestTokenARN(std::forward<RequestTokenARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters associated with the request.</p>
     */
    inline const AsyncRequestParameters& GetRequestParameters() const { return m_requestParameters; }
    inline bool RequestParametersHasBeenSet() const { return m_requestParametersHasBeenSet; }
    template<typename RequestParametersT = AsyncRequestParameters>
    void SetRequestParameters(RequestParametersT&& value) { m_requestParametersHasBeenSet = true; m_requestParameters = std::forward<RequestParametersT>(value); }
    template<typename RequestParametersT = AsyncRequestParameters>
    AsyncOperation& WithRequestParameters(RequestParametersT&& value) { SetRequestParameters(std::forward<RequestParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the request.</p>
     */
    inline const Aws::String& GetRequestStatus() const { return m_requestStatus; }
    inline bool RequestStatusHasBeenSet() const { return m_requestStatusHasBeenSet; }
    template<typename RequestStatusT = Aws::String>
    void SetRequestStatus(RequestStatusT&& value) { m_requestStatusHasBeenSet = true; m_requestStatus = std::forward<RequestStatusT>(value); }
    template<typename RequestStatusT = Aws::String>
    AsyncOperation& WithRequestStatus(RequestStatusT&& value) { SetRequestStatus(std::forward<RequestStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details of the response.</p>
     */
    inline const AsyncResponseDetails& GetResponseDetails() const { return m_responseDetails; }
    inline bool ResponseDetailsHasBeenSet() const { return m_responseDetailsHasBeenSet; }
    template<typename ResponseDetailsT = AsyncResponseDetails>
    void SetResponseDetails(ResponseDetailsT&& value) { m_responseDetailsHasBeenSet = true; m_responseDetails = std::forward<ResponseDetailsT>(value); }
    template<typename ResponseDetailsT = AsyncResponseDetails>
    AsyncOperation& WithResponseDetails(ResponseDetailsT&& value) { SetResponseDetails(std::forward<ResponseDetailsT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    AsyncOperationName m_operation{AsyncOperationName::NOT_SET};
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
