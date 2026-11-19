/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/polly/PollyPaginationBase.h>
#include <aws/polly/PollyServiceClientModel.h>
#include <aws/polly/PollyWaiter.h>
#include <aws/polly/Polly_EXPORTS.h>

namespace Aws {
namespace Polly {
/**
 * <p>Amazon Polly is a web service that makes it easy to synthesize speech from
 * text.</p> <p>The Amazon Polly service provides API operations for synthesizing
 * high-quality speech from plain text and Speech Synthesis Markup Language (SSML),
 * along with managing pronunciations lexicons that enable you to get the best
 * results for your application domain.</p> <p>Authenticated API calls must be
 * signed using the Signature Version 4 Signing Process. For more information, see
 * <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_sigv.html">Signing
 * Amazon Web Services API Requests</a> in the <i>IAM User Guide</i>.</p>
 */
class AWS_POLLY_API PollyClient : public Aws::Client::AWSJsonClient,
                                  public Aws::Client::ClientWithAsyncTemplateMethods<PollyClient>,
                                  public PollyPaginationBase<PollyClient>,
                                  public PollyWaiter<PollyClient> {
 public:
  typedef Aws::Client::AWSJsonClient BASECLASS;
  static const char* GetServiceName();
  static const char* GetAllocationTag();

  typedef PollyClientConfiguration ClientConfigurationType;
  typedef PollyEndpointProvider EndpointProviderType;

  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  PollyClient(const Aws::Polly::PollyClientConfiguration& clientConfiguration = Aws::Polly::PollyClientConfiguration(),
              std::shared_ptr<PollyEndpointProviderBase> endpointProvider = nullptr);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  PollyClient(const Aws::Auth::AWSCredentials& credentials, std::shared_ptr<PollyEndpointProviderBase> endpointProvider = nullptr,
              const Aws::Polly::PollyClientConfiguration& clientConfiguration = Aws::Polly::PollyClientConfiguration());

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  PollyClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
              std::shared_ptr<PollyEndpointProviderBase> endpointProvider = nullptr,
              const Aws::Polly::PollyClientConfiguration& clientConfiguration = Aws::Polly::PollyClientConfiguration());

  /* Legacy constructors due deprecation */
  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  PollyClient(const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  PollyClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  PollyClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
              const Aws::Client::ClientConfiguration& clientConfiguration);

  /* End of legacy constructors due deprecation */
  virtual ~PollyClient();

  /**
   * <p>Creates a custom voice from recordings of a speaker and returns it in
   * <code>pending</code> status. Use <code>GetVoice</code> to check the status. When
   * the status is <code>active</code>, you can use the voice ID in
   * <code>SynthesizeSpeech</code>, <code>StartSpeechSynthesisTask</code>, and
   * <code>StartSpeechSynthesisStream</code>.</p> <p>The
   * <code>custom-voice-max-count</code> service quota limits the number of custom
   * voices in your account in each Region. If you reach the quota, the request fails
   * with <code>ServiceQuotaExceededException</code>.</p> <p>This operation requires
   * permissions to perform the <code>polly:CreateVoice</code> action. You also need
   * <code>s3:GetObject</code> permission on each recording that you specify by
   * <code>S3Url</code>. If you specify a customer managed key, you also need
   * <code>kms:DescribeKey</code>, <code>kms:GenerateDataKey</code>, and
   * <code>kms:Decrypt</code> permissions on the key. If you specify
   * <code>Tags</code>, you also need the <code>polly:TagResource</code>
   * permission.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/polly-2016-06-10/CreateVoice">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateVoiceOutcome CreateVoice(const Model::CreateVoiceRequest& request) const;

  /**
   * A Callable wrapper for CreateVoice that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename CreateVoiceRequestT = Model::CreateVoiceRequest>
  Model::CreateVoiceOutcomeCallable CreateVoiceCallable(const CreateVoiceRequestT& request) const {
    return SubmitCallable(&PollyClient::CreateVoice, request);
  }

  /**
   * An Async wrapper for CreateVoice that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename CreateVoiceRequestT = Model::CreateVoiceRequest>
  void CreateVoiceAsync(const CreateVoiceRequestT& request, const CreateVoiceResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PollyClient::CreateVoice, request, handler, context);
  }

  /**
   * <p>Deletes the specified pronunciation lexicon stored in an Amazon Web Services
   * Region. A lexicon which has been deleted is not available for speech synthesis,
   * nor is it possible to retrieve it using either the <code>GetLexicon</code> or
   * <code>ListLexicon</code> APIs.</p> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/polly/latest/dg/managing-lexicons.html">Managing
   * Lexicons</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/polly-2016-06-10/DeleteLexicon">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteLexiconOutcome DeleteLexicon(const Model::DeleteLexiconRequest& request) const;

  /**
   * A Callable wrapper for DeleteLexicon that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename DeleteLexiconRequestT = Model::DeleteLexiconRequest>
  Model::DeleteLexiconOutcomeCallable DeleteLexiconCallable(const DeleteLexiconRequestT& request) const {
    return SubmitCallable(&PollyClient::DeleteLexicon, request);
  }

  /**
   * An Async wrapper for DeleteLexicon that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename DeleteLexiconRequestT = Model::DeleteLexiconRequest>
  void DeleteLexiconAsync(const DeleteLexiconRequestT& request, const DeleteLexiconResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PollyClient::DeleteLexicon, request, handler, context);
  }

  /**
   * <p>Deletes a custom voice. <code>DescribeVoices</code> and <code>GetVoice</code>
   * stop returning the voice immediately. You can't restore a deleted voice.</p>
   * <p>You can delete a voice in <code>active</code> or <code>failed</code> status.
   * If the voice is in <code>pending</code> status, the request fails with
   * <code>ConflictException</code>. If no custom voice with the specified ID exists
   * in your account and Region, the request fails with
   * <code>ResourceNotFoundException</code>. You can delete the voice even if you
   * disabled its Amazon Web Services KMS key or scheduled it for deletion.</p>
   * <p>This operation requires permissions to perform the
   * <code>polly:DeleteVoice</code> action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/polly-2016-06-10/DeleteVoice">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteVoiceOutcome DeleteVoice(const Model::DeleteVoiceRequest& request) const;

  /**
   * A Callable wrapper for DeleteVoice that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename DeleteVoiceRequestT = Model::DeleteVoiceRequest>
  Model::DeleteVoiceOutcomeCallable DeleteVoiceCallable(const DeleteVoiceRequestT& request) const {
    return SubmitCallable(&PollyClient::DeleteVoice, request);
  }

  /**
   * An Async wrapper for DeleteVoice that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename DeleteVoiceRequestT = Model::DeleteVoiceRequest>
  void DeleteVoiceAsync(const DeleteVoiceRequestT& request, const DeleteVoiceResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PollyClient::DeleteVoice, request, handler, context);
  }

  /**
   * <p>Returns the list of voices: the voices that Amazon Polly provides and the
   * custom voices in your account. Each voice speaks a specified language and is
   * identified by an ID. A voice that Amazon Polly provides is either male or
   * female, and its ID is the ASCII version of the voice name.</p> <p>When
   * synthesizing speech (<code>SynthesizeSpeech</code>), you provide the voice ID
   * for the voice you want from the list of voices returned by
   * <code>DescribeVoices</code>.</p> <p>For example, your news reader application
   * reads news in a specific language, and you want to give users the option to
   * choose the voice. With the <code>DescribeVoices</code> operation, you can
   * provide a list of available voices for users to choose from.</p> <p> You can
   * optionally specify a language code to filter the available voices. For example,
   * if you specify <code>en-US</code>, the operation returns a list of all available
   * US English voices. </p> <p>The list includes custom voices in every status. For
   * each voice, <code>Origin</code> indicates whether Amazon Polly provides the
   * voice or you created it. You can use a custom voice for synthesis only when its
   * status is <code>active</code>. A voice in <code>failed</code> status stays in
   * the list until you delete it.</p> <p>For a custom voice,
   * <code>DescribeVoices</code> returns <code>Origin</code>, <code>Id</code>,
   * <code>Name</code>, <code>Status</code>, <code>LanguageCode</code>,
   * <code>LanguageName</code>, <code>SupportedEngines</code>, and
   * <code>CreationTime</code>. To get <code>Arn</code>, <code>StatusReason</code>,
   * <code>VoiceCreationData</code>, and <code>CustomerManagedEncryption</code>, use
   * <code>GetVoice</code>.</p> <p>The <code>LanguageCode</code> and
   * <code>Engine</code> filters apply to custom voices in the same way as to voices
   * that Amazon Polly provides.</p> <p>This operation requires permissions to
   * perform the <code>polly:DescribeVoices</code> action.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/polly-2016-06-10/DescribeVoices">AWS
   * API Reference</a></p>
   */
  virtual Model::DescribeVoicesOutcome DescribeVoices(const Model::DescribeVoicesRequest& request = {}) const;

  /**
   * A Callable wrapper for DescribeVoices that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename DescribeVoicesRequestT = Model::DescribeVoicesRequest>
  Model::DescribeVoicesOutcomeCallable DescribeVoicesCallable(const DescribeVoicesRequestT& request = {}) const {
    return SubmitCallable(&PollyClient::DescribeVoices, request);
  }

  /**
   * An Async wrapper for DescribeVoices that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename DescribeVoicesRequestT = Model::DescribeVoicesRequest>
  void DescribeVoicesAsync(const DescribeVoicesResponseReceivedHandler& handler,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                           const DescribeVoicesRequestT& request = {}) const {
    return SubmitAsync(&PollyClient::DescribeVoices, request, handler, context);
  }

  /**
   * <p>Returns the content of the specified pronunciation lexicon stored in an
   * Amazon Web Services Region. For more information, see <a
   * href="https://docs.aws.amazon.com/polly/latest/dg/managing-lexicons.html">Managing
   * Lexicons</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/polly-2016-06-10/GetLexicon">AWS
   * API Reference</a></p>
   */
  virtual Model::GetLexiconOutcome GetLexicon(const Model::GetLexiconRequest& request) const;

  /**
   * A Callable wrapper for GetLexicon that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetLexiconRequestT = Model::GetLexiconRequest>
  Model::GetLexiconOutcomeCallable GetLexiconCallable(const GetLexiconRequestT& request) const {
    return SubmitCallable(&PollyClient::GetLexicon, request);
  }

  /**
   * An Async wrapper for GetLexicon that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetLexiconRequestT = Model::GetLexiconRequest>
  void GetLexiconAsync(const GetLexiconRequestT& request, const GetLexiconResponseReceivedHandler& handler,
                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PollyClient::GetLexicon, request, handler, context);
  }

  /**
   * <p>Retrieves a specific SpeechSynthesisTask object based on its TaskID. This
   * object contains information about the given speech synthesis task, including the
   * status of the task, and a link to the S3 bucket containing the output of the
   * task.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/polly-2016-06-10/GetSpeechSynthesisTask">AWS
   * API Reference</a></p>
   */
  virtual Model::GetSpeechSynthesisTaskOutcome GetSpeechSynthesisTask(const Model::GetSpeechSynthesisTaskRequest& request) const;

  /**
   * A Callable wrapper for GetSpeechSynthesisTask that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetSpeechSynthesisTaskRequestT = Model::GetSpeechSynthesisTaskRequest>
  Model::GetSpeechSynthesisTaskOutcomeCallable GetSpeechSynthesisTaskCallable(const GetSpeechSynthesisTaskRequestT& request) const {
    return SubmitCallable(&PollyClient::GetSpeechSynthesisTask, request);
  }

  /**
   * An Async wrapper for GetSpeechSynthesisTask that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename GetSpeechSynthesisTaskRequestT = Model::GetSpeechSynthesisTaskRequest>
  void GetSpeechSynthesisTaskAsync(const GetSpeechSynthesisTaskRequestT& request,
                                   const GetSpeechSynthesisTaskResponseReceivedHandler& handler,
                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PollyClient::GetSpeechSynthesisTask, request, handler, context);
  }

  /**
   * <p>Returns the status and properties of a custom voice. Use this operation after
   * <code>CreateVoice</code> to check whether the status of the voice is
   * <code>active</code> or <code>failed</code>. Unlike <code>DescribeVoices</code>,
   * <code>GetVoice</code> also returns <code>Arn</code>,
   * <code>VoiceCreationData</code>, <code>CustomerManagedEncryption</code>, and
   * <code>StatusReason</code>. If no custom voice with the specified ID exists in
   * your account and Region, the request fails with
   * <code>ResourceNotFoundException</code>.</p> <p>This operation requires
   * permissions to perform the <code>polly:GetVoice</code> action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/polly-2016-06-10/GetVoice">AWS API
   * Reference</a></p>
   */
  virtual Model::GetVoiceOutcome GetVoice(const Model::GetVoiceRequest& request) const;

  /**
   * A Callable wrapper for GetVoice that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetVoiceRequestT = Model::GetVoiceRequest>
  Model::GetVoiceOutcomeCallable GetVoiceCallable(const GetVoiceRequestT& request) const {
    return SubmitCallable(&PollyClient::GetVoice, request);
  }

  /**
   * An Async wrapper for GetVoice that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetVoiceRequestT = Model::GetVoiceRequest>
  void GetVoiceAsync(const GetVoiceRequestT& request, const GetVoiceResponseReceivedHandler& handler,
                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PollyClient::GetVoice, request, handler, context);
  }

  /**
   * <p>Returns a list of pronunciation lexicons stored in an Amazon Web Services
   * Region. For more information, see <a
   * href="https://docs.aws.amazon.com/polly/latest/dg/managing-lexicons.html">Managing
   * Lexicons</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/polly-2016-06-10/ListLexicons">AWS
   * API Reference</a></p>
   */
  virtual Model::ListLexiconsOutcome ListLexicons(const Model::ListLexiconsRequest& request = {}) const;

  /**
   * A Callable wrapper for ListLexicons that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListLexiconsRequestT = Model::ListLexiconsRequest>
  Model::ListLexiconsOutcomeCallable ListLexiconsCallable(const ListLexiconsRequestT& request = {}) const {
    return SubmitCallable(&PollyClient::ListLexicons, request);
  }

  /**
   * An Async wrapper for ListLexicons that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListLexiconsRequestT = Model::ListLexiconsRequest>
  void ListLexiconsAsync(const ListLexiconsResponseReceivedHandler& handler,
                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                         const ListLexiconsRequestT& request = {}) const {
    return SubmitAsync(&PollyClient::ListLexicons, request, handler, context);
  }

  /**
   * <p>Returns a list of SpeechSynthesisTask objects ordered by their creation date.
   * This operation can filter the tasks by their status, for example, allowing users
   * to list only tasks that are completed.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/polly-2016-06-10/ListSpeechSynthesisTasks">AWS
   * API Reference</a></p>
   */
  virtual Model::ListSpeechSynthesisTasksOutcome ListSpeechSynthesisTasks(const Model::ListSpeechSynthesisTasksRequest& request = {}) const;

  /**
   * A Callable wrapper for ListSpeechSynthesisTasks that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListSpeechSynthesisTasksRequestT = Model::ListSpeechSynthesisTasksRequest>
  Model::ListSpeechSynthesisTasksOutcomeCallable ListSpeechSynthesisTasksCallable(
      const ListSpeechSynthesisTasksRequestT& request = {}) const {
    return SubmitCallable(&PollyClient::ListSpeechSynthesisTasks, request);
  }

  /**
   * An Async wrapper for ListSpeechSynthesisTasks that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListSpeechSynthesisTasksRequestT = Model::ListSpeechSynthesisTasksRequest>
  void ListSpeechSynthesisTasksAsync(const ListSpeechSynthesisTasksResponseReceivedHandler& handler,
                                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                     const ListSpeechSynthesisTasksRequestT& request = {}) const {
    return SubmitAsync(&PollyClient::ListSpeechSynthesisTasks, request, handler, context);
  }

  /**
   * <p>Lists the tags for an Amazon Polly resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/polly-2016-06-10/ListTagsForResource">AWS
   * API Reference</a></p>
   */
  virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

  /**
   * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
  Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const {
    return SubmitCallable(&PollyClient::ListTagsForResource, request);
  }

  /**
   * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
  void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PollyClient::ListTagsForResource, request, handler, context);
  }

  /**
   * <p>Stores a pronunciation lexicon in an Amazon Web Services Region. If a lexicon
   * with the same name already exists in the region, it is overwritten by the new
   * lexicon. Lexicon operations have eventual consistency, therefore, it might take
   * some time before the lexicon is available to the SynthesizeSpeech operation.</p>
   * <p>Overwriting a lexicon keeps its existing tags. You can specify tags only when
   * you create a lexicon. If you specify tags for a lexicon that already exists, the
   * request fails with a <code>ValidationException</code>. To change the tags of an
   * existing lexicon, use <code>TagResource</code> and
   * <code>UntagResource</code>.</p> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/polly/latest/dg/managing-lexicons.html">Managing
   * Lexicons</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/polly-2016-06-10/PutLexicon">AWS
   * API Reference</a></p>
   */
  virtual Model::PutLexiconOutcome PutLexicon(const Model::PutLexiconRequest& request) const;

  /**
   * A Callable wrapper for PutLexicon that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename PutLexiconRequestT = Model::PutLexiconRequest>
  Model::PutLexiconOutcomeCallable PutLexiconCallable(const PutLexiconRequestT& request) const {
    return SubmitCallable(&PollyClient::PutLexicon, request);
  }

  /**
   * An Async wrapper for PutLexicon that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename PutLexiconRequestT = Model::PutLexiconRequest>
  void PutLexiconAsync(const PutLexiconRequestT& request, const PutLexiconResponseReceivedHandler& handler,
                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PollyClient::PutLexicon, request, handler, context);
  }

  /**
   * <p>Synthesizes UTF-8 input, plain text, or SSML over a bidirectional streaming
   * connection. Specify synthesis parameters in HTTP/2 headers, send text
   * incrementally as events on the input stream, and receive synthesized audio as it
   * becomes available.</p> <p>This operation serves as a bidirectional counterpart
   * to <code>SynthesizeSpeech</code>:</p> <ul> <li> <p> <a
   * href="https://docs.aws.amazon.com/polly/latest/dg/API_SynthesizeSpeech.html">SynthesizeSpeech</a>
   * </p> </li> </ul> <p>To use a custom voice, specify its ID in
   * <code>VoiceId</code>. The voice must be in <code>active</code> status. If the
   * voice is in <code>pending</code> or <code>failed</code> status, the request
   * fails with <code>ConflictException</code>. If no custom voice with the specified
   * ID exists in your account and Region, the request fails with
   * <code>ResourceNotFoundException</code>. If the custom voice uses a customer
   * managed key, you need <code>kms:Decrypt</code> permission on the key. If you
   * disabled the key or scheduled it for deletion, the request fails with
   * <code>ValidationException</code>. If you don't have permission to use the key,
   * the request fails with <code>AccessDeniedException</code>. If Amazon Web
   * Services KMS throttles Amazon Polly's request to use the key, the request fails
   * with <code>ThrottlingException</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/polly-2016-06-10/StartSpeechSynthesisStream">AWS
   * API Reference</a></p>
   *
   * Queues the request into a thread executor.
   * The streamReadyHandler is triggered when the stream is ready to be written to.
   * The handler is triggered when the request is finished.
   */
  virtual void StartSpeechSynthesisStreamAsync(
      Model::StartSpeechSynthesisStreamRequest& request, const StartSpeechSynthesisStreamStreamReadyHandler& streamReadyHandler,
      const StartSpeechSynthesisStreamResponseReceivedHandler& handler,
      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& handlerContext = nullptr) const;

  /**
   * <p>Starts an asynchronous synthesis task by creating a new
   * <code>SpeechSynthesisTask</code>. This operation requires all the standard
   * information needed for speech synthesis, plus the name of an Amazon S3 bucket
   * for the service to store the output of the synthesis task and two optional
   * parameters (<code>OutputS3KeyPrefix</code> and <code>SnsTopicArn</code>). After
   * Amazon Polly creates the synthesis task, the operation returns a
   * <code>SpeechSynthesisTask</code> object that includes an identifier for the task
   * and its current status. The <code>SpeechSynthesisTask</code> object is available
   * for 72 hours after you start the asynchronous synthesis task.</p> <p>To use a
   * custom voice, specify its ID in <code>VoiceId</code>. The voice must be in
   * <code>active</code> status. If the voice is in <code>pending</code> or
   * <code>failed</code> status, the request fails with
   * <code>ConflictException</code>. If no custom voice with the specified ID exists
   * in your account and Region, the request fails with
   * <code>ResourceNotFoundException</code>. If the custom voice uses a customer
   * managed key, you need <code>kms:Decrypt</code> permission on the key. If you
   * disable the key or schedule it for deletion before the task runs, the task fails
   * and <code>TaskStatusReason</code> describes the cause.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/polly-2016-06-10/StartSpeechSynthesisTask">AWS
   * API Reference</a></p>
   */
  virtual Model::StartSpeechSynthesisTaskOutcome StartSpeechSynthesisTask(const Model::StartSpeechSynthesisTaskRequest& request) const;

  /**
   * A Callable wrapper for StartSpeechSynthesisTask that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename StartSpeechSynthesisTaskRequestT = Model::StartSpeechSynthesisTaskRequest>
  Model::StartSpeechSynthesisTaskOutcomeCallable StartSpeechSynthesisTaskCallable(const StartSpeechSynthesisTaskRequestT& request) const {
    return SubmitCallable(&PollyClient::StartSpeechSynthesisTask, request);
  }

  /**
   * An Async wrapper for StartSpeechSynthesisTask that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename StartSpeechSynthesisTaskRequestT = Model::StartSpeechSynthesisTaskRequest>
  void StartSpeechSynthesisTaskAsync(const StartSpeechSynthesisTaskRequestT& request,
                                     const StartSpeechSynthesisTaskResponseReceivedHandler& handler,
                                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PollyClient::StartSpeechSynthesisTask, request, handler, context);
  }

  /**
   * <p>Synthesizes UTF-8 input, plain text or SSML, to a stream of bytes. SSML input
   * must be valid, well-formed SSML. Some alphabets might not be available with all
   * the voices (for example, Cyrillic might not be read at all by English voices)
   * unless phoneme mapping is used. For more information, see <a
   * href="https://docs.aws.amazon.com/polly/latest/dg/how-text-to-speech-works.html">How
   * it Works</a>.</p> <p>To use a custom voice, specify its ID in
   * <code>VoiceId</code>. The voice must be in <code>active</code> status. If the
   * voice is in <code>pending</code> or <code>failed</code> status, the request
   * fails with <code>ConflictException</code>. If no custom voice with the specified
   * ID exists in your account and Region, the request fails with
   * <code>ResourceNotFoundException</code>.</p> <p>If the custom voice uses a
   * customer managed key, you need <code>kms:Decrypt</code> permission on the key.
   * If you disabled the key or scheduled it for deletion, the request fails with
   * <code>ValidationException</code>. If you don't have permission to use the key,
   * the request fails with <code>AccessDeniedException</code>. If Amazon Web
   * Services KMS throttles Amazon Polly's request to use the key, the request fails
   * with <code>ThrottlingException</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/polly-2016-06-10/SynthesizeSpeech">AWS
   * API Reference</a></p>
   */
  virtual Model::SynthesizeSpeechOutcome SynthesizeSpeech(const Model::SynthesizeSpeechRequest& request) const;

  /**
   * A Callable wrapper for SynthesizeSpeech that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename SynthesizeSpeechRequestT = Model::SynthesizeSpeechRequest>
  Model::SynthesizeSpeechOutcomeCallable SynthesizeSpeechCallable(const SynthesizeSpeechRequestT& request) const {
    return SubmitCallable(&PollyClient::SynthesizeSpeech, request);
  }

  /**
   * An Async wrapper for SynthesizeSpeech that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename SynthesizeSpeechRequestT = Model::SynthesizeSpeechRequest>
  void SynthesizeSpeechAsync(const SynthesizeSpeechRequestT& request, const SynthesizeSpeechResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PollyClient::SynthesizeSpeech, request, handler, context);
  }

  /**
   * <p>Adds specified tags to a resource with the specified ARN. Existing tags on a
   * resource are not changed if they are not specified in the request parameters. If
   * you specify a tag key that already exists on the resource, the value in the
   * request replaces the existing value.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/polly-2016-06-10/TagResource">AWS
   * API Reference</a></p>
   */
  virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

  /**
   * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename TagResourceRequestT = Model::TagResourceRequest>
  Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const {
    return SubmitCallable(&PollyClient::TagResource, request);
  }

  /**
   * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename TagResourceRequestT = Model::TagResourceRequest>
  void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PollyClient::TagResource, request, handler, context);
  }

  /**
   * <p>Deletes specified tags from a resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/polly-2016-06-10/UntagResource">AWS
   * API Reference</a></p>
   */
  virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

  /**
   * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename UntagResourceRequestT = Model::UntagResourceRequest>
  Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const {
    return SubmitCallable(&PollyClient::UntagResource, request);
  }

  /**
   * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename UntagResourceRequestT = Model::UntagResourceRequest>
  void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PollyClient::UntagResource, request, handler, context);
  }

  virtual void OverrideEndpoint(const Aws::String& endpoint);
  virtual std::shared_ptr<PollyEndpointProviderBase>& accessEndpointProvider();

 private:
  friend class Aws::Client::ClientWithAsyncTemplateMethods<PollyClient>;
  void init(const PollyClientConfiguration& clientConfiguration);

  typedef Aws::Utils::Outcome<Aws::AmazonWebServiceResult<RESPONSE>, PollyError> InvokeOperationOutcome;

  InvokeOperationOutcome InvokeServiceOperation(const AmazonWebServiceRequest& request,
                                                const std::function<void(Aws::Endpoint::ResolveEndpointOutcome&)>& resolveUri,
                                                Aws::Http::HttpMethod httpMethod) const;

  PollyClientConfiguration m_clientConfiguration;
  std::shared_ptr<PollyEndpointProviderBase> m_endpointProvider;
};

}  // namespace Polly
}  // namespace Aws
