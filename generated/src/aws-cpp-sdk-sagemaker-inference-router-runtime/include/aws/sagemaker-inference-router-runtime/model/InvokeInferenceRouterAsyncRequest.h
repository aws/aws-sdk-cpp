/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker-inference-router-runtime/SageMakerInferenceRouterRuntimeRequest.h>
#include <aws/sagemaker-inference-router-runtime/SageMakerInferenceRouterRuntime_EXPORTS.h>

#include <utility>

namespace Aws {
namespace SageMakerInferenceRouterRuntime {
namespace Model {

/**
 */
class InvokeInferenceRouterAsyncRequest : public SageMakerInferenceRouterRuntimeRequest {
 public:
  AWS_SAGEMAKERINFERENCEROUTERRUNTIME_API InvokeInferenceRouterAsyncRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "InvokeInferenceRouterAsync"; }

  AWS_SAGEMAKERINFERENCEROUTERRUNTIME_API Aws::String SerializePayload() const override;

  AWS_SAGEMAKERINFERENCEROUTERRUNTIME_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The name of the inference router to invoke.</p>
   */
  inline const Aws::String& GetInferenceRouterName() const { return m_inferenceRouterName; }
  inline bool InferenceRouterNameHasBeenSet() const { return m_inferenceRouterNameHasBeenSet; }
  template <typename InferenceRouterNameT = Aws::String>
  void SetInferenceRouterName(InferenceRouterNameT&& value) {
    m_inferenceRouterNameHasBeenSet = true;
    m_inferenceRouterName = std::forward<InferenceRouterNameT>(value);
  }
  template <typename InferenceRouterNameT = Aws::String>
  InvokeInferenceRouterAsyncRequest& WithInferenceRouterName(InferenceRouterNameT&& value) {
    SetInferenceRouterName(std::forward<InferenceRouterNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the routing target in the inference router. The routing target
   * must be configured for asynchronous inference.</p>
   */
  inline const Aws::String& GetRoutingTargetName() const { return m_routingTargetName; }
  inline bool RoutingTargetNameHasBeenSet() const { return m_routingTargetNameHasBeenSet; }
  template <typename RoutingTargetNameT = Aws::String>
  void SetRoutingTargetName(RoutingTargetNameT&& value) {
    m_routingTargetNameHasBeenSet = true;
    m_routingTargetName = std::forward<RoutingTargetNameT>(value);
  }
  template <typename RoutingTargetNameT = Aws::String>
  InvokeInferenceRouterAsyncRequest& WithRoutingTargetName(RoutingTargetNameT&& value) {
    SetRoutingTargetName(std::forward<RoutingTargetNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The MIME type of the input data in Amazon S3. The router passes it to the
   * destination.</p>
   */
  inline const Aws::String& GetContentType() const { return m_contentType; }
  inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }
  template <typename ContentTypeT = Aws::String>
  void SetContentType(ContentTypeT&& value) {
    m_contentTypeHasBeenSet = true;
    m_contentType = std::forward<ContentTypeT>(value);
  }
  template <typename ContentTypeT = Aws::String>
  InvokeInferenceRouterAsyncRequest& WithContentType(ContentTypeT&& value) {
    SetContentType(std::forward<ContentTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The MIME type that you want for the inference response. The router passes it
   * to the destination.</p>
   */
  inline const Aws::String& GetAccept() const { return m_accept; }
  inline bool AcceptHasBeenSet() const { return m_acceptHasBeenSet; }
  template <typename AcceptT = Aws::String>
  void SetAccept(AcceptT&& value) {
    m_acceptHasBeenSet = true;
    m_accept = std::forward<AcceptT>(value);
  }
  template <typename AcceptT = Aws::String>
  InvokeInferenceRouterAsyncRequest& WithAccept(AcceptT&& value) {
    SetAccept(std::forward<AcceptT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Provides additional information about the inference request. The value is an
   * opaque string that the router passes, unchanged, to the model container of the
   * destination that serves the request. The value can contain up to 1,024 visible
   * US-ASCII characters.</p>
   */
  inline const Aws::String& GetCustomAttributes() const { return m_customAttributes; }
  inline bool CustomAttributesHasBeenSet() const { return m_customAttributesHasBeenSet; }
  template <typename CustomAttributesT = Aws::String>
  void SetCustomAttributes(CustomAttributesT&& value) {
    m_customAttributesHasBeenSet = true;
    m_customAttributes = std::forward<CustomAttributesT>(value);
  }
  template <typename CustomAttributesT = Aws::String>
  InvokeInferenceRouterAsyncRequest& WithCustomAttributes(CustomAttributesT&& value) {
    SetCustomAttributes(std::forward<CustomAttributesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An identifier for the inference request. If you don't provide one, SageMaker
   * AI generates one and returns it in the response.</p>
   */
  inline const Aws::String& GetInferenceId() const { return m_inferenceId; }
  inline bool InferenceIdHasBeenSet() const { return m_inferenceIdHasBeenSet; }
  template <typename InferenceIdT = Aws::String>
  void SetInferenceId(InferenceIdT&& value) {
    m_inferenceIdHasBeenSet = true;
    m_inferenceId = std::forward<InferenceIdT>(value);
  }
  template <typename InferenceIdT = Aws::String>
  InvokeInferenceRouterAsyncRequest& WithInferenceId(InferenceIdT&& value) {
    SetInferenceId(std::forward<InferenceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon S3 URI of the object that contains the input data for the
   * inference. The bucket must be in the inference router's Amazon Web Services
   * Region and owned by the router's account. The destination endpoint's execution
   * role reads the object, and the destination's asynchronous inference limits apply
   * to it.</p>
   */
  inline const Aws::String& GetInputLocation() const { return m_inputLocation; }
  inline bool InputLocationHasBeenSet() const { return m_inputLocationHasBeenSet; }
  template <typename InputLocationT = Aws::String>
  void SetInputLocation(InputLocationT&& value) {
    m_inputLocationHasBeenSet = true;
    m_inputLocation = std::forward<InputLocationT>(value);
  }
  template <typename InputLocationT = Aws::String>
  InvokeInferenceRouterAsyncRequest& WithInputLocation(InputLocationT&& value) {
    SetInputLocation(std::forward<InputLocationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The path extension that is appended to the routing target's Amazon S3 output
   * path where the inference response is stored.</p>
   */
  inline const Aws::String& GetS3OutputPathExtension() const { return m_s3OutputPathExtension; }
  inline bool S3OutputPathExtensionHasBeenSet() const { return m_s3OutputPathExtensionHasBeenSet; }
  template <typename S3OutputPathExtensionT = Aws::String>
  void SetS3OutputPathExtension(S3OutputPathExtensionT&& value) {
    m_s3OutputPathExtensionHasBeenSet = true;
    m_s3OutputPathExtension = std::forward<S3OutputPathExtensionT>(value);
  }
  template <typename S3OutputPathExtensionT = Aws::String>
  InvokeInferenceRouterAsyncRequest& WithS3OutputPathExtension(S3OutputPathExtensionT&& value) {
    SetS3OutputPathExtension(std::forward<S3OutputPathExtensionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The file name of the inference response stored in Amazon S3. If you don't
   * provide one, SageMaker AI generates one.</p>
   */
  inline const Aws::String& GetFilename() const { return m_filename; }
  inline bool FilenameHasBeenSet() const { return m_filenameHasBeenSet; }
  template <typename FilenameT = Aws::String>
  void SetFilename(FilenameT&& value) {
    m_filenameHasBeenSet = true;
    m_filename = std::forward<FilenameT>(value);
  }
  template <typename FilenameT = Aws::String>
  InvokeInferenceRouterAsyncRequest& WithFilename(FilenameT&& value) {
    SetFilename(std::forward<FilenameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time to live of the request, in seconds, measured from when the router
   * accepts it. If no destination starts the request in this time, the request
   * fails. The default is 21,600 seconds (6 hours).</p>
   */
  inline int GetRequestTTLSeconds() const { return m_requestTTLSeconds; }
  inline bool RequestTTLSecondsHasBeenSet() const { return m_requestTTLSecondsHasBeenSet; }
  inline void SetRequestTTLSeconds(int value) {
    m_requestTTLSecondsHasBeenSet = true;
    m_requestTTLSeconds = value;
  }
  inline InvokeInferenceRouterAsyncRequest& WithRequestTTLSeconds(int value) {
    SetRequestTTLSeconds(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum time, in seconds, that a destination can spend processing the
   * request before the request is marked as expired. The default is 900 seconds (15
   * minutes).</p>
   */
  inline int GetInvocationTimeoutSeconds() const { return m_invocationTimeoutSeconds; }
  inline bool InvocationTimeoutSecondsHasBeenSet() const { return m_invocationTimeoutSecondsHasBeenSet; }
  inline void SetInvocationTimeoutSeconds(int value) {
    m_invocationTimeoutSecondsHasBeenSet = true;
    m_invocationTimeoutSeconds = value;
  }
  inline InvokeInferenceRouterAsyncRequest& WithInvocationTimeoutSeconds(int value) {
    SetInvocationTimeoutSeconds(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_inferenceRouterName;

  Aws::String m_routingTargetName;

  Aws::String m_contentType;

  Aws::String m_accept;

  Aws::String m_customAttributes;

  Aws::String m_inferenceId;

  Aws::String m_inputLocation;

  Aws::String m_s3OutputPathExtension;

  Aws::String m_filename;

  int m_requestTTLSeconds{0};

  int m_invocationTimeoutSeconds{0};
  bool m_inferenceRouterNameHasBeenSet = false;
  bool m_routingTargetNameHasBeenSet = false;
  bool m_contentTypeHasBeenSet = false;
  bool m_acceptHasBeenSet = false;
  bool m_customAttributesHasBeenSet = false;
  bool m_inferenceIdHasBeenSet = false;
  bool m_inputLocationHasBeenSet = false;
  bool m_s3OutputPathExtensionHasBeenSet = false;
  bool m_filenameHasBeenSet = false;
  bool m_requestTTLSecondsHasBeenSet = false;
  bool m_invocationTimeoutSecondsHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMakerInferenceRouterRuntime
}  // namespace Aws
