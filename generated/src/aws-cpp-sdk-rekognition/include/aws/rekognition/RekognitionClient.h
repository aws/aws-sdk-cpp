/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/rekognition/RekognitionServiceClientModel.h>

namespace Aws
{
namespace Rekognition
{
  /**
   * <p>This is the API Reference for <a
   * href="https://docs.aws.amazon.com/rekognition/latest/dg/images.html">Amazon
   * Rekognition Image</a>, <a
   * href="https://docs.aws.amazon.com/rekognition/latest/customlabels-dg/what-is.html">Amazon
   * Rekognition Custom Labels</a>, <a
   * href="https://docs.aws.amazon.com/rekognition/latest/dg/video.html">Amazon
   * Rekognition Stored Video</a>, <a
   * href="https://docs.aws.amazon.com/rekognition/latest/dg/streaming-video.html">Amazon
   * Rekognition Streaming Video</a>. It provides descriptions of actions, data
   * types, common parameters, and common errors.</p> <p> <b>Amazon Rekognition
   * Image</b> </p> <ul> <li> <p> <a
   * href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_AssociateFaces.html">AssociateFaces</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_CompareFaces.html">CompareFaces</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_CreateCollection.html">CreateCollection</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_CreateUser.html">CreateUser</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_DeleteCollection.html">DeleteCollection</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_DeleteFaces.html">DeleteFaces</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_DeleteUser.html">DeleteUser</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_DescribeCollection.html">DescribeCollection</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_DetectFaces.html">DetectFaces</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_DetectLabels.html">DetectLabels</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_DetectModerationLabels.html">DetectModerationLabels</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_DetectProtectiveEquipment.html">DetectProtectiveEquipment</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_DetectText.html">DetectText</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_DisassociateFaces.html">DisassociateFaces</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_GetCelebrityInfo.html">GetCelebrityInfo</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_GetMediaAnalysisJob.html">GetMediaAnalysisJob</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_IndexFaces.html">IndexFaces</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_ListCollections.html">ListCollections</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_ListMediaAnalysisJob.html">ListMediaAnalysisJob</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_ListFaces.html">ListFaces</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_ListFaces.html">ListUsers</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_RecognizeCelebrities.html">RecognizeCelebrities</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_SearchFaces.html">SearchFaces</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_SearchFacesByImage.html">SearchFacesByImage</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_SearchUsers.html">SearchUsers</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_SearchUsersByImage.html">SearchUsersByImage</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_StartMediaAnalysisJob.html">StartMediaAnalysisJob</a>
   * </p> </li> </ul> <p> <b>Amazon Rekognition Custom Labels</b> </p> <ul> <li> <p>
   * <a
   * href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_CopyProjectVersion.html">CopyProjectVersion</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_CreateDataset.html">CreateDataset</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_CreateProject.html">CreateProject</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_CreateProjectVersion.html">CreateProjectVersion</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_DeleteDataset.html">DeleteDataset</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_DeleteProject.html">DeleteProject</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_DeleteProjectPolicy.html">DeleteProjectPolicy</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_DeleteProjectVersion.html">DeleteProjectVersion</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_DescribeDataset.html">DescribeDataset</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_DescribeProjects.html">DescribeProjects</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_DescribeProjectVersions.html">DescribeProjectVersions</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_DetectCustomLabels.html">DetectCustomLabels</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_DistributeDatasetEntries.html">DistributeDatasetEntries</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_ListDatasetEntries.html">ListDatasetEntries</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_ListDatasetLabels.html">ListDatasetLabels</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_ListProjectPolicies.html">ListProjectPolicies</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_PutProjectPolicy.html">PutProjectPolicy</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_StartProjectVersion.html">StartProjectVersion</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_StopProjectVersion.html">StopProjectVersion</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_UpdateDatasetEntries.html">UpdateDatasetEntries</a>
   * </p> </li> </ul> <p> <b>Amazon Rekognition Video Stored Video</b> </p> <ul> <li>
   * <p> <a
   * href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_GetCelebrityRecognition.html">GetCelebrityRecognition</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_GetContentModeration.html">GetContentModeration</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_GetFaceDetection.html">GetFaceDetection</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_GetFaceSearch.html">GetFaceSearch</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_GetLabelDetection.html">GetLabelDetection</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_GetPersonTracking.html">GetPersonTracking</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_GetSegmentDetection.html">GetSegmentDetection</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_GetTextDetection.html">GetTextDetection</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_StartCelebrityRecognition.html">StartCelebrityRecognition</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_StartContentModeration.html">StartContentModeration</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_StartFaceDetection.html">StartFaceDetection</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_StartFaceSearch.html">StartFaceSearch</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_StartLabelDetection.html">StartLabelDetection</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_StartPersonTracking.html">StartPersonTracking</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_StartSegmentDetection.html">StartSegmentDetection</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_StartTextDetection.html">StartTextDetection</a>
   * </p> </li> </ul> <p> <b>Amazon Rekognition Video Streaming Video</b> </p> <ul>
   * <li> <p> <a
   * href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_CreateStreamProcessor.html">CreateStreamProcessor</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_DeleteStreamProcessor.html">DeleteStreamProcessor</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_DescribeStreamProcessor.html">DescribeStreamProcessor</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_ListStreamProcessors.html">ListStreamProcessors</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_StartStreamProcessor.html">StartStreamProcessor</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_StopStreamProcessor.html">StopStreamProcessor</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_UpdateStreamProcessor.html">UpdateStreamProcessor</a>
   * </p> </li> </ul>
   */
  class AWS_REKOGNITION_API RekognitionClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<RekognitionClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef RekognitionClientConfiguration ClientConfigurationType;
      typedef RekognitionEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        RekognitionClient(const Aws::Rekognition::RekognitionClientConfiguration& clientConfiguration = Aws::Rekognition::RekognitionClientConfiguration(),
                          std::shared_ptr<RekognitionEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        RekognitionClient(const Aws::Auth::AWSCredentials& credentials,
                          std::shared_ptr<RekognitionEndpointProviderBase> endpointProvider = nullptr,
                          const Aws::Rekognition::RekognitionClientConfiguration& clientConfiguration = Aws::Rekognition::RekognitionClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        RekognitionClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                          std::shared_ptr<RekognitionEndpointProviderBase> endpointProvider = nullptr,
                          const Aws::Rekognition::RekognitionClientConfiguration& clientConfiguration = Aws::Rekognition::RekognitionClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        RekognitionClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        RekognitionClient(const Aws::Auth::AWSCredentials& credentials,
                          const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        RekognitionClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                          const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~RekognitionClient();

        /**
         * <p>Associates one or more faces with an existing UserID. Takes an array of
         * <code>FaceIds</code>. Each <code>FaceId</code> that are present in the
         * <code>FaceIds</code> list is associated with the provided UserID. The maximum
         * number of total <code>FaceIds</code> per UserID is 100. </p> <p>The
         * <code>UserMatchThreshold</code> parameter specifies the minimum user match
         * confidence required for the face to be associated with a UserID that has at
         * least one <code>FaceID</code> already associated. This ensures that the
         * <code>FaceIds</code> are associated with the right UserID. The value ranges from
         * 0-100 and default value is 75. </p> <p>If successful, an array of
         * <code>AssociatedFace</code> objects containing the associated
         * <code>FaceIds</code> is returned. If a given face is already associated with the
         * given <code>UserID</code>, it will be ignored and will not be returned in the
         * response. If a given face is already associated to a different
         * <code>UserID</code>, isn't found in the collection, doesn’t meet the
         * <code>UserMatchThreshold</code>, or there are already 100 faces associated with
         * the <code>UserID</code>, it will be returned as part of an array of
         * <code>UnsuccessfulFaceAssociations.</code> </p> <p>The <code>UserStatus</code>
         * reflects the status of an operation which updates a UserID representation with a
         * list of given faces. The <code>UserStatus</code> can be: </p> <ul> <li>
         * <p>ACTIVE - All associations or disassociations of FaceID(s) for a UserID are
         * complete.</p> </li> <li> <p>CREATED - A UserID has been created, but has no
         * FaceID(s) associated with it.</p> </li> <li> <p>UPDATING - A UserID is being
         * updated and there are current associations or disassociations of FaceID(s)
         * taking place.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/AssociateFaces">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateFacesOutcome AssociateFaces(const Model::AssociateFacesRequest& request) const;

        /**
         * A Callable wrapper for AssociateFaces that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateFacesRequestT = Model::AssociateFacesRequest>
        Model::AssociateFacesOutcomeCallable AssociateFacesCallable(const AssociateFacesRequestT& request) const
        {
            return SubmitCallable(&RekognitionClient::AssociateFaces, request);
        }

        /**
         * An Async wrapper for AssociateFaces that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateFacesRequestT = Model::AssociateFacesRequest>
        void AssociateFacesAsync(const AssociateFacesRequestT& request, const AssociateFacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RekognitionClient::AssociateFaces, request, handler, context);
        }

        /**
         * <p>Compares a face in the <i>source</i> input image with each of the 100 largest
         * faces detected in the <i>target</i> input image. </p> <p> If the source image
         * contains multiple faces, the service detects the largest face and compares it
         * with each face detected in the target image. </p>  <p>CompareFaces uses
         * machine learning algorithms, which are probabilistic. A false negative is an
         * incorrect prediction that a face in the target image has a low similarity
         * confidence score when compared to the face in the source image. To reduce the
         * probability of false negatives, we recommend that you compare the target image
         * against multiple source images. If you plan to use <code>CompareFaces</code> to
         * make a decision that impacts an individual's rights, privacy, or access to
         * services, we recommend that you pass the result to a human for review and
         * further validation before taking action.</p>  <p>You pass the input and
         * target images either as base64-encoded image bytes or as references to images in
         * an Amazon S3 bucket. If you use the AWS CLI to call Amazon Rekognition
         * operations, passing image bytes isn't supported. The image must be formatted as
         * a PNG or JPEG file. </p> <p>In response, the operation returns an array of face
         * matches ordered by similarity score in descending order. For each face match,
         * the response provides a bounding box of the face, facial landmarks, pose details
         * (pitch, roll, and yaw), quality (brightness and sharpness), and confidence value
         * (indicating the level of confidence that the bounding box contains a face). The
         * response also provides a similarity score, which indicates how closely the faces
         * match. </p>  <p>By default, only faces with a similarity score of greater
         * than or equal to 80% are returned in the response. You can change this value by
         * specifying the <code>SimilarityThreshold</code> parameter.</p>  <p>
         * <code>CompareFaces</code> also returns an array of faces that don't match the
         * source image. For each face, it returns a bounding box, confidence value,
         * landmarks, pose details, and quality. The response also returns information
         * about the face in the source image, including the bounding box of the face and
         * confidence value.</p> <p>The <code>QualityFilter</code> input parameter allows
         * you to filter out detected faces that don’t meet a required quality bar. The
         * quality bar is based on a variety of common use cases. Use
         * <code>QualityFilter</code> to set the quality bar by specifying
         * <code>LOW</code>, <code>MEDIUM</code>, or <code>HIGH</code>. If you do not want
         * to filter detected faces, specify <code>NONE</code>. The default value is
         * <code>NONE</code>. </p> <p>If the image doesn't contain Exif metadata,
         * <code>CompareFaces</code> returns orientation information for the source and
         * target images. Use these values to display the images with the correct image
         * orientation.</p> <p>If no faces are detected in the source or target images,
         * <code>CompareFaces</code> returns an <code>InvalidParameterException</code>
         * error. </p>  <p> This is a stateless API operation. That is, data returned
         * by this operation doesn't persist.</p>  <p>For an example, see Comparing
         * Faces in Images in the Amazon Rekognition Developer Guide.</p> <p>This operation
         * requires permissions to perform the <code>rekognition:CompareFaces</code>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/CompareFaces">AWS
         * API Reference</a></p>
         */
        virtual Model::CompareFacesOutcome CompareFaces(const Model::CompareFacesRequest& request) const;

        /**
         * A Callable wrapper for CompareFaces that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CompareFacesRequestT = Model::CompareFacesRequest>
        Model::CompareFacesOutcomeCallable CompareFacesCallable(const CompareFacesRequestT& request) const
        {
            return SubmitCallable(&RekognitionClient::CompareFaces, request);
        }

        /**
         * An Async wrapper for CompareFaces that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CompareFacesRequestT = Model::CompareFacesRequest>
        void CompareFacesAsync(const CompareFacesRequestT& request, const CompareFacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RekognitionClient::CompareFaces, request, handler, context);
        }

        /**
         *  <p>This operation applies only to Amazon Rekognition Custom Labels.</p>
         *  <p>Copies a version of an Amazon Rekognition Custom Labels model from a
         * source project to a destination project. The source and destination projects can
         * be in different AWS accounts but must be in the same AWS Region. You can't copy
         * a model to another AWS service. </p> <p>To copy a model version to a different
         * AWS account, you need to create a resource-based policy known as a <i>project
         * policy</i>. You attach the project policy to the source project by calling
         * <a>PutProjectPolicy</a>. The project policy gives permission to copy the model
         * version from a trusting AWS account to a trusted account.</p> <p>For more
         * information creating and attaching a project policy, see Attaching a project
         * policy (SDK) in the <i>Amazon Rekognition Custom Labels Developer Guide</i>.
         * </p> <p>If you are copying a model version to a project in the same AWS account,
         * you don't need to create a project policy.</p>  <p>Copying project
         * versions is supported only for Custom Labels models. </p> <p>To copy a model,
         * the destination project, source project, and source model version must already
         * exist.</p>  <p>Copying a model version takes a while to complete. To get
         * the current status, call <a>DescribeProjectVersions</a> and check the value of
         * <code>Status</code> in the <a>ProjectVersionDescription</a> object. The copy
         * operation has finished when the value of <code>Status</code> is
         * <code>COPYING_COMPLETED</code>.</p> <p>This operation requires permissions to
         * perform the <code>rekognition:CopyProjectVersion</code> action.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/CopyProjectVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::CopyProjectVersionOutcome CopyProjectVersion(const Model::CopyProjectVersionRequest& request) const;

        /**
         * A Callable wrapper for CopyProjectVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CopyProjectVersionRequestT = Model::CopyProjectVersionRequest>
        Model::CopyProjectVersionOutcomeCallable CopyProjectVersionCallable(const CopyProjectVersionRequestT& request) const
        {
            return SubmitCallable(&RekognitionClient::CopyProjectVersion, request);
        }

        /**
         * An Async wrapper for CopyProjectVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CopyProjectVersionRequestT = Model::CopyProjectVersionRequest>
        void CopyProjectVersionAsync(const CopyProjectVersionRequestT& request, const CopyProjectVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RekognitionClient::CopyProjectVersion, request, handler, context);
        }

        /**
         * <p>Creates a collection in an AWS Region. You can add faces to the collection
         * using the <a>IndexFaces</a> operation. </p> <p>For example, you might create
         * collections, one for each of your application users. A user can then index faces
         * using the <code>IndexFaces</code> operation and persist results in a specific
         * collection. Then, a user can search the collection for faces in the
         * user-specific container. </p> <p>When you create a collection, it is associated
         * with the latest version of the face model version.</p>  <p>Collection
         * names are case-sensitive.</p>  <p>This operation requires permissions to
         * perform the <code>rekognition:CreateCollection</code> action. If you want to tag
         * your collection, you also require permission to perform the
         * <code>rekognition:TagResource</code> operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/CreateCollection">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCollectionOutcome CreateCollection(const Model::CreateCollectionRequest& request) const;

        /**
         * A Callable wrapper for CreateCollection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateCollectionRequestT = Model::CreateCollectionRequest>
        Model::CreateCollectionOutcomeCallable CreateCollectionCallable(const CreateCollectionRequestT& request) const
        {
            return SubmitCallable(&RekognitionClient::CreateCollection, request);
        }

        /**
         * An Async wrapper for CreateCollection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateCollectionRequestT = Model::CreateCollectionRequest>
        void CreateCollectionAsync(const CreateCollectionRequestT& request, const CreateCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RekognitionClient::CreateCollection, request, handler, context);
        }

        /**
         *  <p>This operation applies only to Amazon Rekognition Custom Labels.</p>
         *  <p>Creates a new Amazon Rekognition Custom Labels dataset. You can
         * create a dataset by using an Amazon Sagemaker format manifest file or by copying
         * an existing Amazon Rekognition Custom Labels dataset.</p> <p>To create a
         * training dataset for a project, specify <code>TRAIN</code> for the value of
         * <code>DatasetType</code>. To create the test dataset for a project, specify
         * <code>TEST</code> for the value of <code>DatasetType</code>. </p> <p>The
         * response from <code>CreateDataset</code> is the Amazon Resource Name (ARN) for
         * the dataset. Creating a dataset takes a while to complete. Use
         * <a>DescribeDataset</a> to check the current status. The dataset created
         * successfully if the value of <code>Status</code> is
         * <code>CREATE_COMPLETE</code>. </p> <p>To check if any non-terminal errors
         * occurred, call <a>ListDatasetEntries</a> and check for the presence of
         * <code>errors</code> lists in the JSON Lines.</p> <p>Dataset creation fails if a
         * terminal error occurs (<code>Status</code> = <code>CREATE_FAILED</code>).
         * Currently, you can't access the terminal error information. </p> <p>For more
         * information, see Creating dataset in the <i>Amazon Rekognition Custom Labels
         * Developer Guide</i>.</p> <p>This operation requires permissions to perform the
         * <code>rekognition:CreateDataset</code> action. If you want to copy an existing
         * dataset, you also require permission to perform the
         * <code>rekognition:ListDatasetEntries</code> action.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/CreateDataset">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDatasetOutcome CreateDataset(const Model::CreateDatasetRequest& request) const;

        /**
         * A Callable wrapper for CreateDataset that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDatasetRequestT = Model::CreateDatasetRequest>
        Model::CreateDatasetOutcomeCallable CreateDatasetCallable(const CreateDatasetRequestT& request) const
        {
            return SubmitCallable(&RekognitionClient::CreateDataset, request);
        }

        /**
         * An Async wrapper for CreateDataset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDatasetRequestT = Model::CreateDatasetRequest>
        void CreateDatasetAsync(const CreateDatasetRequestT& request, const CreateDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RekognitionClient::CreateDataset, request, handler, context);
        }

        /**
         * <p>This API operation initiates a Face Liveness session. It returns a
         * <code>SessionId</code>, which you can use to start streaming Face Liveness video
         * and get the results for a Face Liveness session. </p> <p>You can use the
         * <code>OutputConfig</code> option in the Settings parameter to provide an Amazon
         * S3 bucket location. The Amazon S3 bucket stores reference images and audit
         * images. If no Amazon S3 bucket is defined, raw bytes are sent instead. </p>
         * <p>You can use <code>AuditImagesLimit</code> to limit the number of audit images
         * returned when <code>GetFaceLivenessSessionResults</code> is called. This number
         * is between 0 and 4. By default, it is set to 0. The limit is best effort and
         * based on the duration of the selfie-video. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/CreateFaceLivenessSession">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFaceLivenessSessionOutcome CreateFaceLivenessSession(const Model::CreateFaceLivenessSessionRequest& request) const;

        /**
         * A Callable wrapper for CreateFaceLivenessSession that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateFaceLivenessSessionRequestT = Model::CreateFaceLivenessSessionRequest>
        Model::CreateFaceLivenessSessionOutcomeCallable CreateFaceLivenessSessionCallable(const CreateFaceLivenessSessionRequestT& request) const
        {
            return SubmitCallable(&RekognitionClient::CreateFaceLivenessSession, request);
        }

        /**
         * An Async wrapper for CreateFaceLivenessSession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateFaceLivenessSessionRequestT = Model::CreateFaceLivenessSessionRequest>
        void CreateFaceLivenessSessionAsync(const CreateFaceLivenessSessionRequestT& request, const CreateFaceLivenessSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RekognitionClient::CreateFaceLivenessSession, request, handler, context);
        }

        /**
         * <p>Creates a new Amazon Rekognition project. A project is a group of resources
         * (datasets, model versions) that you use to create and manage a Amazon
         * Rekognition Custom Labels Model or custom adapter. You can specify a feature to
         * create the project with, if no feature is specified then Custom Labels is used
         * by default. For adapters, you can also choose whether or not to have the project
         * auto update by using the AutoUpdate argument. This operation requires
         * permissions to perform the <code>rekognition:CreateProject</code>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/CreateProject">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateProjectOutcome CreateProject(const Model::CreateProjectRequest& request) const;

        /**
         * A Callable wrapper for CreateProject that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateProjectRequestT = Model::CreateProjectRequest>
        Model::CreateProjectOutcomeCallable CreateProjectCallable(const CreateProjectRequestT& request) const
        {
            return SubmitCallable(&RekognitionClient::CreateProject, request);
        }

        /**
         * An Async wrapper for CreateProject that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateProjectRequestT = Model::CreateProjectRequest>
        void CreateProjectAsync(const CreateProjectRequestT& request, const CreateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RekognitionClient::CreateProject, request, handler, context);
        }

        /**
         * <p>Creates a new version of Amazon Rekognition project (like a Custom Labels
         * model or a custom adapter) and begins training. Models and adapters are managed
         * as part of a Rekognition project. The response from
         * <code>CreateProjectVersion</code> is an Amazon Resource Name (ARN) for the
         * project version. </p> <p>The FeatureConfig operation argument allows you to
         * configure specific model or adapter settings. You can provide a description to
         * the project version by using the VersionDescription argment. Training can take a
         * while to complete. You can get the current status by calling
         * <a>DescribeProjectVersions</a>. Training completed successfully if the value of
         * the <code>Status</code> field is <code>TRAINING_COMPLETED</code>. Once training
         * has successfully completed, call <a>DescribeProjectVersions</a> to get the
         * training results and evaluate the model.</p> <p>This operation requires
         * permissions to perform the <code>rekognition:CreateProjectVersion</code>
         * action.</p>  <p> <i>The following applies only to projects with Amazon
         * Rekognition Custom Labels as the chosen feature:</i> </p> <p>You can train a
         * model in a project that doesn't have associated datasets by specifying manifest
         * files in the <code>TrainingData</code> and <code>TestingData</code> fields. </p>
         * <p>If you open the console after training a model with manifest files, Amazon
         * Rekognition Custom Labels creates the datasets for you using the most recent
         * manifest files. You can no longer train a model version for the project by
         * specifying manifest files. </p> <p>Instead of training with a project without
         * associated datasets, we recommend that you use the manifest files to create
         * training and test datasets for the project.</p>  <p/><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/CreateProjectVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateProjectVersionOutcome CreateProjectVersion(const Model::CreateProjectVersionRequest& request) const;

        /**
         * A Callable wrapper for CreateProjectVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateProjectVersionRequestT = Model::CreateProjectVersionRequest>
        Model::CreateProjectVersionOutcomeCallable CreateProjectVersionCallable(const CreateProjectVersionRequestT& request) const
        {
            return SubmitCallable(&RekognitionClient::CreateProjectVersion, request);
        }

        /**
         * An Async wrapper for CreateProjectVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateProjectVersionRequestT = Model::CreateProjectVersionRequest>
        void CreateProjectVersionAsync(const CreateProjectVersionRequestT& request, const CreateProjectVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RekognitionClient::CreateProjectVersion, request, handler, context);
        }

        /**
         * <p>Creates an Amazon Rekognition stream processor that you can use to detect and
         * recognize faces or to detect labels in a streaming video.</p> <p>Amazon
         * Rekognition Video is a consumer of live video from Amazon Kinesis Video Streams.
         * There are two different settings for stream processors in Amazon Rekognition:
         * detecting faces and detecting labels.</p> <ul> <li> <p>If you are creating a
         * stream processor for detecting faces, you provide as input a Kinesis video
         * stream (<code>Input</code>) and a Kinesis data stream (<code>Output</code>)
         * stream for receiving the output. You must use the <code>FaceSearch</code> option
         * in <code>Settings</code>, specifying the collection that contains the faces you
         * want to recognize. After you have finished analyzing a streaming video, use
         * <a>StopStreamProcessor</a> to stop processing.</p> </li> <li> <p>If you are
         * creating a stream processor to detect labels, you provide as input a Kinesis
         * video stream (<code>Input</code>), Amazon S3 bucket information
         * (<code>Output</code>), and an Amazon SNS topic ARN
         * (<code>NotificationChannel</code>). You can also provide a KMS key ID to encrypt
         * the data sent to your Amazon S3 bucket. You specify what you want to detect by
         * using the <code>ConnectedHome</code> option in settings, and selecting one of
         * the following: <code>PERSON</code>, <code>PET</code>, <code>PACKAGE</code>,
         * <code>ALL</code> You can also specify where in the frame you want Amazon
         * Rekognition to monitor with <code>RegionsOfInterest</code>. When you run the
         * <a>StartStreamProcessor</a> operation on a label detection stream processor, you
         * input start and stop information to determine the length of the processing
         * time.</p> </li> </ul> <p> Use <code>Name</code> to assign an identifier for the
         * stream processor. You use <code>Name</code> to manage the stream processor. For
         * example, you can start processing the source video by calling
         * <a>StartStreamProcessor</a> with the <code>Name</code> field. </p> <p>This
         * operation requires permissions to perform the
         * <code>rekognition:CreateStreamProcessor</code> action. If you want to tag your
         * stream processor, you also require permission to perform the
         * <code>rekognition:TagResource</code> operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/CreateStreamProcessor">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateStreamProcessorOutcome CreateStreamProcessor(const Model::CreateStreamProcessorRequest& request) const;

        /**
         * A Callable wrapper for CreateStreamProcessor that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateStreamProcessorRequestT = Model::CreateStreamProcessorRequest>
        Model::CreateStreamProcessorOutcomeCallable CreateStreamProcessorCallable(const CreateStreamProcessorRequestT& request) const
        {
            return SubmitCallable(&RekognitionClient::CreateStreamProcessor, request);
        }

        /**
         * An Async wrapper for CreateStreamProcessor that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateStreamProcessorRequestT = Model::CreateStreamProcessorRequest>
        void CreateStreamProcessorAsync(const CreateStreamProcessorRequestT& request, const CreateStreamProcessorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RekognitionClient::CreateStreamProcessor, request, handler, context);
        }

        /**
         * <p>Creates a new User within a collection specified by
         * <code>CollectionId</code>. Takes <code>UserId</code> as a parameter, which is a
         * user provided ID which should be unique within the collection. The provided
         * <code>UserId</code> will alias the system generated UUID to make the
         * <code>UserId</code> more user friendly. </p> <p>Uses a <code>ClientToken</code>,
         * an idempotency token that ensures a call to <code>CreateUser</code> completes
         * only once. If the value is not supplied, the AWS SDK generates an idempotency
         * token for the requests. This prevents retries after a network error results from
         * making multiple <code>CreateUser</code> calls. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/CreateUser">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateUserOutcome CreateUser(const Model::CreateUserRequest& request) const;

        /**
         * A Callable wrapper for CreateUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateUserRequestT = Model::CreateUserRequest>
        Model::CreateUserOutcomeCallable CreateUserCallable(const CreateUserRequestT& request) const
        {
            return SubmitCallable(&RekognitionClient::CreateUser, request);
        }

        /**
         * An Async wrapper for CreateUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateUserRequestT = Model::CreateUserRequest>
        void CreateUserAsync(const CreateUserRequestT& request, const CreateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RekognitionClient::CreateUser, request, handler, context);
        }

        /**
         * <p>Deletes the specified collection. Note that this operation removes all faces
         * in the collection. For an example, see <a
         * href="https://docs.aws.amazon.com/rekognition/latest/dg/delete-collection-procedure.html">Deleting
         * a collection</a>.</p> <p>This operation requires permissions to perform the
         * <code>rekognition:DeleteCollection</code> action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/DeleteCollection">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCollectionOutcome DeleteCollection(const Model::DeleteCollectionRequest& request) const;

        /**
         * A Callable wrapper for DeleteCollection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteCollectionRequestT = Model::DeleteCollectionRequest>
        Model::DeleteCollectionOutcomeCallable DeleteCollectionCallable(const DeleteCollectionRequestT& request) const
        {
            return SubmitCallable(&RekognitionClient::DeleteCollection, request);
        }

        /**
         * An Async wrapper for DeleteCollection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteCollectionRequestT = Model::DeleteCollectionRequest>
        void DeleteCollectionAsync(const DeleteCollectionRequestT& request, const DeleteCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RekognitionClient::DeleteCollection, request, handler, context);
        }

        /**
         *  <p>This operation applies only to Amazon Rekognition Custom Labels.</p>
         *  <p>Deletes an existing Amazon Rekognition Custom Labels dataset.
         * Deleting a dataset might take while. Use <a>DescribeDataset</a> to check the
         * current status. The dataset is still deleting if the value of
         * <code>Status</code> is <code>DELETE_IN_PROGRESS</code>. If you try to access the
         * dataset after it is deleted, you get a <code>ResourceNotFoundException</code>
         * exception. </p> <p>You can't delete a dataset while it is creating
         * (<code>Status</code> = <code>CREATE_IN_PROGRESS</code>) or if the dataset is
         * updating (<code>Status</code> = <code>UPDATE_IN_PROGRESS</code>).</p> <p>This
         * operation requires permissions to perform the
         * <code>rekognition:DeleteDataset</code> action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/DeleteDataset">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDatasetOutcome DeleteDataset(const Model::DeleteDatasetRequest& request) const;

        /**
         * A Callable wrapper for DeleteDataset that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDatasetRequestT = Model::DeleteDatasetRequest>
        Model::DeleteDatasetOutcomeCallable DeleteDatasetCallable(const DeleteDatasetRequestT& request) const
        {
            return SubmitCallable(&RekognitionClient::DeleteDataset, request);
        }

        /**
         * An Async wrapper for DeleteDataset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDatasetRequestT = Model::DeleteDatasetRequest>
        void DeleteDatasetAsync(const DeleteDatasetRequestT& request, const DeleteDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RekognitionClient::DeleteDataset, request, handler, context);
        }

        /**
         * <p>Deletes faces from a collection. You specify a collection ID and an array of
         * face IDs to remove from the collection.</p> <p>This operation requires
         * permissions to perform the <code>rekognition:DeleteFaces</code>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/DeleteFaces">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFacesOutcome DeleteFaces(const Model::DeleteFacesRequest& request) const;

        /**
         * A Callable wrapper for DeleteFaces that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteFacesRequestT = Model::DeleteFacesRequest>
        Model::DeleteFacesOutcomeCallable DeleteFacesCallable(const DeleteFacesRequestT& request) const
        {
            return SubmitCallable(&RekognitionClient::DeleteFaces, request);
        }

        /**
         * An Async wrapper for DeleteFaces that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteFacesRequestT = Model::DeleteFacesRequest>
        void DeleteFacesAsync(const DeleteFacesRequestT& request, const DeleteFacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RekognitionClient::DeleteFaces, request, handler, context);
        }

        /**
         * <p>Deletes a Amazon Rekognition project. To delete a project you must first
         * delete all models or adapters associated with the project. To delete a model or
         * adapter, see <a>DeleteProjectVersion</a>.</p> <p> <code>DeleteProject</code> is
         * an asynchronous operation. To check if the project is deleted, call
         * <a>DescribeProjects</a>. The project is deleted when the project no longer
         * appears in the response. Be aware that deleting a given project will also delete
         * any <code>ProjectPolicies</code> associated with that project.</p> <p>This
         * operation requires permissions to perform the
         * <code>rekognition:DeleteProject</code> action. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/DeleteProject">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteProjectOutcome DeleteProject(const Model::DeleteProjectRequest& request) const;

        /**
         * A Callable wrapper for DeleteProject that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteProjectRequestT = Model::DeleteProjectRequest>
        Model::DeleteProjectOutcomeCallable DeleteProjectCallable(const DeleteProjectRequestT& request) const
        {
            return SubmitCallable(&RekognitionClient::DeleteProject, request);
        }

        /**
         * An Async wrapper for DeleteProject that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteProjectRequestT = Model::DeleteProjectRequest>
        void DeleteProjectAsync(const DeleteProjectRequestT& request, const DeleteProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RekognitionClient::DeleteProject, request, handler, context);
        }

        /**
         *  <p>This operation applies only to Amazon Rekognition Custom Labels.</p>
         *  <p>Deletes an existing project policy.</p> <p>To get a list of project
         * policies attached to a project, call <a>ListProjectPolicies</a>. To attach a
         * project policy to a project, call <a>PutProjectPolicy</a>.</p> <p>This operation
         * requires permissions to perform the <code>rekognition:DeleteProjectPolicy</code>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/DeleteProjectPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteProjectPolicyOutcome DeleteProjectPolicy(const Model::DeleteProjectPolicyRequest& request) const;

        /**
         * A Callable wrapper for DeleteProjectPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteProjectPolicyRequestT = Model::DeleteProjectPolicyRequest>
        Model::DeleteProjectPolicyOutcomeCallable DeleteProjectPolicyCallable(const DeleteProjectPolicyRequestT& request) const
        {
            return SubmitCallable(&RekognitionClient::DeleteProjectPolicy, request);
        }

        /**
         * An Async wrapper for DeleteProjectPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteProjectPolicyRequestT = Model::DeleteProjectPolicyRequest>
        void DeleteProjectPolicyAsync(const DeleteProjectPolicyRequestT& request, const DeleteProjectPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RekognitionClient::DeleteProjectPolicy, request, handler, context);
        }

        /**
         * <p>Deletes a Rekognition project model or project version, like a Amazon
         * Rekognition Custom Labels model or a custom adapter.</p> <p>You can't delete a
         * project version if it is running or if it is training. To check the status of a
         * project version, use the Status field returned from
         * <a>DescribeProjectVersions</a>. To stop a project version call
         * <a>StopProjectVersion</a>. If the project version is training, wait until it
         * finishes.</p> <p>This operation requires permissions to perform the
         * <code>rekognition:DeleteProjectVersion</code> action. </p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/DeleteProjectVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteProjectVersionOutcome DeleteProjectVersion(const Model::DeleteProjectVersionRequest& request) const;

        /**
         * A Callable wrapper for DeleteProjectVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteProjectVersionRequestT = Model::DeleteProjectVersionRequest>
        Model::DeleteProjectVersionOutcomeCallable DeleteProjectVersionCallable(const DeleteProjectVersionRequestT& request) const
        {
            return SubmitCallable(&RekognitionClient::DeleteProjectVersion, request);
        }

        /**
         * An Async wrapper for DeleteProjectVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteProjectVersionRequestT = Model::DeleteProjectVersionRequest>
        void DeleteProjectVersionAsync(const DeleteProjectVersionRequestT& request, const DeleteProjectVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RekognitionClient::DeleteProjectVersion, request, handler, context);
        }

        /**
         * <p>Deletes the stream processor identified by <code>Name</code>. You assign the
         * value for <code>Name</code> when you create the stream processor with
         * <a>CreateStreamProcessor</a>. You might not be able to use the same name for a
         * stream processor for a few seconds after calling
         * <code>DeleteStreamProcessor</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/DeleteStreamProcessor">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteStreamProcessorOutcome DeleteStreamProcessor(const Model::DeleteStreamProcessorRequest& request) const;

        /**
         * A Callable wrapper for DeleteStreamProcessor that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteStreamProcessorRequestT = Model::DeleteStreamProcessorRequest>
        Model::DeleteStreamProcessorOutcomeCallable DeleteStreamProcessorCallable(const DeleteStreamProcessorRequestT& request) const
        {
            return SubmitCallable(&RekognitionClient::DeleteStreamProcessor, request);
        }

        /**
         * An Async wrapper for DeleteStreamProcessor that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteStreamProcessorRequestT = Model::DeleteStreamProcessorRequest>
        void DeleteStreamProcessorAsync(const DeleteStreamProcessorRequestT& request, const DeleteStreamProcessorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RekognitionClient::DeleteStreamProcessor, request, handler, context);
        }

        /**
         * <p>Deletes the specified UserID within the collection. Faces that are associated
         * with the UserID are disassociated from the UserID before deleting the specified
         * UserID. If the specified <code>Collection</code> or <code>UserID</code> is
         * already deleted or not found, a <code>ResourceNotFoundException</code> will be
         * thrown. If the action is successful with a 200 response, an empty HTTP body is
         * returned. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/DeleteUser">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteUserOutcome DeleteUser(const Model::DeleteUserRequest& request) const;

        /**
         * A Callable wrapper for DeleteUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteUserRequestT = Model::DeleteUserRequest>
        Model::DeleteUserOutcomeCallable DeleteUserCallable(const DeleteUserRequestT& request) const
        {
            return SubmitCallable(&RekognitionClient::DeleteUser, request);
        }

        /**
         * An Async wrapper for DeleteUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteUserRequestT = Model::DeleteUserRequest>
        void DeleteUserAsync(const DeleteUserRequestT& request, const DeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RekognitionClient::DeleteUser, request, handler, context);
        }

        /**
         * <p>Describes the specified collection. You can use
         * <code>DescribeCollection</code> to get information, such as the number of faces
         * indexed into a collection and the version of the model used by the collection
         * for face detection.</p> <p>For more information, see Describing a Collection in
         * the Amazon Rekognition Developer Guide.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/DescribeCollection">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCollectionOutcome DescribeCollection(const Model::DescribeCollectionRequest& request) const;

        /**
         * A Callable wrapper for DescribeCollection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeCollectionRequestT = Model::DescribeCollectionRequest>
        Model::DescribeCollectionOutcomeCallable DescribeCollectionCallable(const DescribeCollectionRequestT& request) const
        {
            return SubmitCallable(&RekognitionClient::DescribeCollection, request);
        }

        /**
         * An Async wrapper for DescribeCollection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeCollectionRequestT = Model::DescribeCollectionRequest>
        void DescribeCollectionAsync(const DescribeCollectionRequestT& request, const DescribeCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RekognitionClient::DescribeCollection, request, handler, context);
        }

        /**
         *  <p>This operation applies only to Amazon Rekognition Custom Labels.</p>
         *  <p> Describes an Amazon Rekognition Custom Labels dataset. You can get
         * information such as the current status of a dataset and statistics about the
         * images and labels in a dataset. </p> <p>This operation requires permissions to
         * perform the <code>rekognition:DescribeDataset</code> action.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/DescribeDataset">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDatasetOutcome DescribeDataset(const Model::DescribeDatasetRequest& request) const;

        /**
         * A Callable wrapper for DescribeDataset that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeDatasetRequestT = Model::DescribeDatasetRequest>
        Model::DescribeDatasetOutcomeCallable DescribeDatasetCallable(const DescribeDatasetRequestT& request) const
        {
            return SubmitCallable(&RekognitionClient::DescribeDataset, request);
        }

        /**
         * An Async wrapper for DescribeDataset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDatasetRequestT = Model::DescribeDatasetRequest>
        void DescribeDatasetAsync(const DescribeDatasetRequestT& request, const DescribeDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RekognitionClient::DescribeDataset, request, handler, context);
        }

        /**
         * <p>Lists and describes the versions of an Amazon Rekognition project. You can
         * specify up to 10 model or adapter versions in <code>ProjectVersionArns</code>.
         * If you don't specify a value, descriptions for all model/adapter versions in the
         * project are returned.</p> <p>This operation requires permissions to perform the
         * <code>rekognition:DescribeProjectVersions</code> action.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/DescribeProjectVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeProjectVersionsOutcome DescribeProjectVersions(const Model::DescribeProjectVersionsRequest& request) const;

        /**
         * A Callable wrapper for DescribeProjectVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeProjectVersionsRequestT = Model::DescribeProjectVersionsRequest>
        Model::DescribeProjectVersionsOutcomeCallable DescribeProjectVersionsCallable(const DescribeProjectVersionsRequestT& request) const
        {
            return SubmitCallable(&RekognitionClient::DescribeProjectVersions, request);
        }

        /**
         * An Async wrapper for DescribeProjectVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeProjectVersionsRequestT = Model::DescribeProjectVersionsRequest>
        void DescribeProjectVersionsAsync(const DescribeProjectVersionsRequestT& request, const DescribeProjectVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RekognitionClient::DescribeProjectVersions, request, handler, context);
        }

        /**
         * <p>Gets information about your Rekognition projects.</p> <p>This operation
         * requires permissions to perform the <code>rekognition:DescribeProjects</code>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/DescribeProjects">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeProjectsOutcome DescribeProjects(const Model::DescribeProjectsRequest& request) const;

        /**
         * A Callable wrapper for DescribeProjects that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeProjectsRequestT = Model::DescribeProjectsRequest>
        Model::DescribeProjectsOutcomeCallable DescribeProjectsCallable(const DescribeProjectsRequestT& request) const
        {
            return SubmitCallable(&RekognitionClient::DescribeProjects, request);
        }

        /**
         * An Async wrapper for DescribeProjects that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeProjectsRequestT = Model::DescribeProjectsRequest>
        void DescribeProjectsAsync(const DescribeProjectsRequestT& request, const DescribeProjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RekognitionClient::DescribeProjects, request, handler, context);
        }

        /**
         * <p>Provides information about a stream processor created by
         * <a>CreateStreamProcessor</a>. You can get information about the input and output
         * streams, the input parameters for the face recognition being performed, and the
         * current status of the stream processor.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/DescribeStreamProcessor">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeStreamProcessorOutcome DescribeStreamProcessor(const Model::DescribeStreamProcessorRequest& request) const;

        /**
         * A Callable wrapper for DescribeStreamProcessor that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeStreamProcessorRequestT = Model::DescribeStreamProcessorRequest>
        Model::DescribeStreamProcessorOutcomeCallable DescribeStreamProcessorCallable(const DescribeStreamProcessorRequestT& request) const
        {
            return SubmitCallable(&RekognitionClient::DescribeStreamProcessor, request);
        }

        /**
         * An Async wrapper for DescribeStreamProcessor that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeStreamProcessorRequestT = Model::DescribeStreamProcessorRequest>
        void DescribeStreamProcessorAsync(const DescribeStreamProcessorRequestT& request, const DescribeStreamProcessorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RekognitionClient::DescribeStreamProcessor, request, handler, context);
        }

        /**
         *  <p>This operation applies only to Amazon Rekognition Custom Labels.</p>
         *  <p>Detects custom labels in a supplied image by using an Amazon
         * Rekognition Custom Labels model. </p> <p>You specify which version of a model
         * version to use by using the <code>ProjectVersionArn</code> input parameter. </p>
         * <p>You pass the input image as base64-encoded image bytes or as a reference to
         * an image in an Amazon S3 bucket. If you use the AWS CLI to call Amazon
         * Rekognition operations, passing image bytes is not supported. The image must be
         * either a PNG or JPEG formatted file. </p> <p> For each object that the model
         * version detects on an image, the API returns a (<code>CustomLabel</code>) object
         * in an array (<code>CustomLabels</code>). Each <code>CustomLabel</code> object
         * provides the label name (<code>Name</code>), the level of confidence that the
         * image contains the object (<code>Confidence</code>), and object location
         * information, if it exists, for the label on the image (<code>Geometry</code>).
         * Note that for the <code>DetectCustomLabelsLabels</code> operation,
         * <code>Polygons</code> are not returned in the <code>Geometry</code> section of
         * the response.</p> <p>To filter labels that are returned, specify a value for
         * <code>MinConfidence</code>. <code>DetectCustomLabelsLabels</code> only returns
         * labels with a confidence that's higher than the specified value. The value of
         * <code>MinConfidence</code> maps to the assumed threshold values created during
         * training. For more information, see <i>Assumed threshold</i> in the Amazon
         * Rekognition Custom Labels Developer Guide. Amazon Rekognition Custom Labels
         * metrics expresses an assumed threshold as a floating point value between 0-1.
         * The range of <code>MinConfidence</code> normalizes the threshold value to a
         * percentage value (0-100). Confidence responses from
         * <code>DetectCustomLabels</code> are also returned as a percentage. You can use
         * <code>MinConfidence</code> to change the precision and recall or your model. For
         * more information, see <i>Analyzing an image</i> in the Amazon Rekognition Custom
         * Labels Developer Guide. </p> <p>If you don't specify a value for
         * <code>MinConfidence</code>, <code>DetectCustomLabels</code> returns labels based
         * on the assumed threshold of each label.</p> <p>This is a stateless API
         * operation. That is, the operation does not persist any data.</p> <p>This
         * operation requires permissions to perform the
         * <code>rekognition:DetectCustomLabels</code> action. </p> <p>For more
         * information, see <i>Analyzing an image</i> in the Amazon Rekognition Custom
         * Labels Developer Guide. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/DetectCustomLabels">AWS
         * API Reference</a></p>
         */
        virtual Model::DetectCustomLabelsOutcome DetectCustomLabels(const Model::DetectCustomLabelsRequest& request) const;

        /**
         * A Callable wrapper for DetectCustomLabels that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DetectCustomLabelsRequestT = Model::DetectCustomLabelsRequest>
        Model::DetectCustomLabelsOutcomeCallable DetectCustomLabelsCallable(const DetectCustomLabelsRequestT& request) const
        {
            return SubmitCallable(&RekognitionClient::DetectCustomLabels, request);
        }

        /**
         * An Async wrapper for DetectCustomLabels that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DetectCustomLabelsRequestT = Model::DetectCustomLabelsRequest>
        void DetectCustomLabelsAsync(const DetectCustomLabelsRequestT& request, const DetectCustomLabelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RekognitionClient::DetectCustomLabels, request, handler, context);
        }

        /**
         * <p>Detects faces within an image that is provided as input.</p> <p>
         * <code>DetectFaces</code> detects the 100 largest faces in the image. For each
         * face detected, the operation returns face details. These details include a
         * bounding box of the face, a confidence value (that the bounding box contains a
         * face), and a fixed set of attributes such as facial landmarks (for example,
         * coordinates of eye and mouth), pose, presence of facial occlusion, and so
         * on.</p> <p>The face-detection algorithm is most effective on frontal faces. For
         * non-frontal or obscured faces, the algorithm might not detect the faces or might
         * detect faces with lower confidence. </p> <p>You pass the input image either as
         * base64-encoded image bytes or as a reference to an image in an Amazon S3 bucket.
         * If you use the AWS CLI to call Amazon Rekognition operations, passing image
         * bytes is not supported. The image must be either a PNG or JPEG formatted file.
         * </p>  <p>This is a stateless API operation. That is, the operation does
         * not persist any data.</p>  <p>This operation requires permissions to
         * perform the <code>rekognition:DetectFaces</code> action. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/DetectFaces">AWS
         * API Reference</a></p>
         */
        virtual Model::DetectFacesOutcome DetectFaces(const Model::DetectFacesRequest& request) const;

        /**
         * A Callable wrapper for DetectFaces that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DetectFacesRequestT = Model::DetectFacesRequest>
        Model::DetectFacesOutcomeCallable DetectFacesCallable(const DetectFacesRequestT& request) const
        {
            return SubmitCallable(&RekognitionClient::DetectFaces, request);
        }

        /**
         * An Async wrapper for DetectFaces that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DetectFacesRequestT = Model::DetectFacesRequest>
        void DetectFacesAsync(const DetectFacesRequestT& request, const DetectFacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RekognitionClient::DetectFaces, request, handler, context);
        }

        /**
         * <p>Detects instances of real-world entities within an image (JPEG or PNG)
         * provided as input. This includes objects like flower, tree, and table; events
         * like wedding, graduation, and birthday party; and concepts like landscape,
         * evening, and nature. </p> <p>For an example, see Analyzing images stored in an
         * Amazon S3 bucket in the Amazon Rekognition Developer Guide.</p> <p>You pass the
         * input image as base64-encoded image bytes or as a reference to an image in an
         * Amazon S3 bucket. If you use the AWS CLI to call Amazon Rekognition operations,
         * passing image bytes is not supported. The image must be either a PNG or JPEG
         * formatted file. </p> <p> <b>Optional Parameters</b> </p> <p>You can specify one
         * or both of the <code>GENERAL_LABELS</code> and <code>IMAGE_PROPERTIES</code>
         * feature types when calling the DetectLabels API. Including
         * <code>GENERAL_LABELS</code> will ensure the response includes the labels
         * detected in the input image, while including <code>IMAGE_PROPERTIES </code>will
         * ensure the response includes information about the image quality and color.</p>
         * <p>When using <code>GENERAL_LABELS</code> and/or <code>IMAGE_PROPERTIES</code>
         * you can provide filtering criteria to the Settings parameter. You can filter
         * with sets of individual labels or with label categories. You can specify
         * inclusive filters, exclusive filters, or a combination of inclusive and
         * exclusive filters. For more information on filtering see <a
         * href="https://docs.aws.amazon.com/rekognition/latest/dg/labels-detect-labels-image.html">Detecting
         * Labels in an Image</a>.</p> <p>When getting labels, you can specify
         * <code>MinConfidence</code> to control the confidence threshold for the labels
         * returned. The default is 55%. You can also add the <code>MaxLabels</code>
         * parameter to limit the number of labels returned. The default and upper limit is
         * 1000 labels. These arguments are only valid when supplying GENERAL_LABELS as a
         * feature type.</p> <p> <b>Response Elements</b> </p> <p> For each object, scene,
         * and concept the API returns one or more labels. The API returns the following
         * types of information about labels:</p> <ul> <li> <p> Name - The name of the
         * detected label. </p> </li> <li> <p> Confidence - The level of confidence in the
         * label assigned to a detected object. </p> </li> <li> <p> Parents - The ancestor
         * labels for a detected label. DetectLabels returns a hierarchical taxonomy of
         * detected labels. For example, a detected car might be assigned the label car.
         * The label car has two parent labels: Vehicle (its parent) and Transportation
         * (its grandparent). The response includes the all ancestors for a label, where
         * every ancestor is a unique label. In the previous example, Car, Vehicle, and
         * Transportation are returned as unique labels in the response. </p> </li> <li>
         * <p> Aliases - Possible Aliases for the label. </p> </li> <li> <p> Categories -
         * The label categories that the detected label belongs to. </p> </li> <li> <p>
         * BoundingBox — Bounding boxes are described for all instances of detected common
         * object labels, returned in an array of Instance objects. An Instance object
         * contains a BoundingBox object, describing the location of the label on the input
         * image. It also includes the confidence for the accuracy of the detected bounding
         * box. </p> </li> </ul> <p> The API returns the following information regarding
         * the image, as part of the ImageProperties structure:</p> <ul> <li> <p>Quality -
         * Information about the Sharpness, Brightness, and Contrast of the input image,
         * scored between 0 to 100. Image quality is returned for the entire image, as well
         * as the background and the foreground. </p> </li> <li> <p>Dominant Color - An
         * array of the dominant colors in the image. </p> </li> <li> <p>Foreground -
         * Information about the sharpness, brightness, and dominant colors of the input
         * image’s foreground. </p> </li> <li> <p>Background - Information about the
         * sharpness, brightness, and dominant colors of the input image’s background.</p>
         * </li> </ul> <p>The list of returned labels will include at least one label for
         * every detected object, along with information about that label. In the following
         * example, suppose the input image has a lighthouse, the sea, and a rock. The
         * response includes all three labels, one for each object, as well as the
         * confidence in the label:</p> <p> <code>{Name: lighthouse, Confidence:
         * 98.4629}</code> </p> <p> <code>{Name: rock,Confidence: 79.2097}</code> </p> <p>
         * <code> {Name: sea,Confidence: 75.061}</code> </p> <p>The list of labels can
         * include multiple labels for the same object. For example, if the input image
         * shows a flower (for example, a tulip), the operation might return the following
         * three labels. </p> <p> <code>{Name: flower,Confidence: 99.0562}</code> </p> <p>
         * <code>{Name: plant,Confidence: 99.0562}</code> </p> <p> <code>{Name:
         * tulip,Confidence: 99.0562}</code> </p> <p>In this example, the detection
         * algorithm more precisely identifies the flower as a tulip.</p>  <p>If the
         * object detected is a person, the operation doesn't provide the same facial
         * details that the <a>DetectFaces</a> operation provides.</p>  <p>This is a
         * stateless API operation that doesn't return any data.</p> <p>This operation
         * requires permissions to perform the <code>rekognition:DetectLabels</code>
         * action. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/DetectLabels">AWS
         * API Reference</a></p>
         */
        virtual Model::DetectLabelsOutcome DetectLabels(const Model::DetectLabelsRequest& request) const;

        /**
         * A Callable wrapper for DetectLabels that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DetectLabelsRequestT = Model::DetectLabelsRequest>
        Model::DetectLabelsOutcomeCallable DetectLabelsCallable(const DetectLabelsRequestT& request) const
        {
            return SubmitCallable(&RekognitionClient::DetectLabels, request);
        }

        /**
         * An Async wrapper for DetectLabels that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DetectLabelsRequestT = Model::DetectLabelsRequest>
        void DetectLabelsAsync(const DetectLabelsRequestT& request, const DetectLabelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RekognitionClient::DetectLabels, request, handler, context);
        }

        /**
         * <p>Detects unsafe content in a specified JPEG or PNG format image. Use
         * <code>DetectModerationLabels</code> to moderate images depending on your
         * requirements. For example, you might want to filter images that contain nudity,
         * but not images containing suggestive content.</p> <p>To filter images, use the
         * labels returned by <code>DetectModerationLabels</code> to determine which types
         * of content are appropriate.</p> <p>For information about moderation labels, see
         * Detecting Unsafe Content in the Amazon Rekognition Developer Guide.</p> <p>You
         * pass the input image either as base64-encoded image bytes or as a reference to
         * an image in an Amazon S3 bucket. If you use the AWS CLI to call Amazon
         * Rekognition operations, passing image bytes is not supported. The image must be
         * either a PNG or JPEG formatted file. </p> <p>You can specify an adapter to use
         * when retrieving label predictions by providing a <code>ProjectVersionArn</code>
         * to the <code>ProjectVersion</code> argument.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/DetectModerationLabels">AWS
         * API Reference</a></p>
         */
        virtual Model::DetectModerationLabelsOutcome DetectModerationLabels(const Model::DetectModerationLabelsRequest& request) const;

        /**
         * A Callable wrapper for DetectModerationLabels that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DetectModerationLabelsRequestT = Model::DetectModerationLabelsRequest>
        Model::DetectModerationLabelsOutcomeCallable DetectModerationLabelsCallable(const DetectModerationLabelsRequestT& request) const
        {
            return SubmitCallable(&RekognitionClient::DetectModerationLabels, request);
        }

        /**
         * An Async wrapper for DetectModerationLabels that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DetectModerationLabelsRequestT = Model::DetectModerationLabelsRequest>
        void DetectModerationLabelsAsync(const DetectModerationLabelsRequestT& request, const DetectModerationLabelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RekognitionClient::DetectModerationLabels, request, handler, context);
        }

        /**
         * <p>Detects Personal Protective Equipment (PPE) worn by people detected in an
         * image. Amazon Rekognition can detect the following types of PPE.</p> <ul> <li>
         * <p>Face cover</p> </li> <li> <p>Hand cover</p> </li> <li> <p>Head cover</p>
         * </li> </ul> <p>You pass the input image as base64-encoded image bytes or as a
         * reference to an image in an Amazon S3 bucket. The image must be either a PNG or
         * JPG formatted file. </p> <p> <code>DetectProtectiveEquipment</code> detects PPE
         * worn by up to 15 persons detected in an image.</p> <p>For each person detected
         * in the image the API returns an array of body parts (face, head, left-hand,
         * right-hand). For each body part, an array of detected items of PPE is returned,
         * including an indicator of whether or not the PPE covers the body part. The API
         * returns the confidence it has in each detection (person, PPE, body part and body
         * part coverage). It also returns a bounding box (<a>BoundingBox</a>) for each
         * detected person and each detected item of PPE. </p> <p>You can optionally
         * request a summary of detected PPE items with the
         * <code>SummarizationAttributes</code> input parameter. The summary provides the
         * following information. </p> <ul> <li> <p>The persons detected as wearing all of
         * the types of PPE that you specify.</p> </li> <li> <p>The persons detected as not
         * wearing all of the types PPE that you specify.</p> </li> <li> <p>The persons
         * detected where PPE adornment could not be determined. </p> </li> </ul> <p>This
         * is a stateless API operation. That is, the operation does not persist any
         * data.</p> <p>This operation requires permissions to perform the
         * <code>rekognition:DetectProtectiveEquipment</code> action. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/DetectProtectiveEquipment">AWS
         * API Reference</a></p>
         */
        virtual Model::DetectProtectiveEquipmentOutcome DetectProtectiveEquipment(const Model::DetectProtectiveEquipmentRequest& request) const;

        /**
         * A Callable wrapper for DetectProtectiveEquipment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DetectProtectiveEquipmentRequestT = Model::DetectProtectiveEquipmentRequest>
        Model::DetectProtectiveEquipmentOutcomeCallable DetectProtectiveEquipmentCallable(const DetectProtectiveEquipmentRequestT& request) const
        {
            return SubmitCallable(&RekognitionClient::DetectProtectiveEquipment, request);
        }

        /**
         * An Async wrapper for DetectProtectiveEquipment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DetectProtectiveEquipmentRequestT = Model::DetectProtectiveEquipmentRequest>
        void DetectProtectiveEquipmentAsync(const DetectProtectiveEquipmentRequestT& request, const DetectProtectiveEquipmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RekognitionClient::DetectProtectiveEquipment, request, handler, context);
        }

        /**
         * <p>Detects text in the input image and converts it into machine-readable
         * text.</p> <p>Pass the input image as base64-encoded image bytes or as a
         * reference to an image in an Amazon S3 bucket. If you use the AWS CLI to call
         * Amazon Rekognition operations, you must pass it as a reference to an image in an
         * Amazon S3 bucket. For the AWS CLI, passing image bytes is not supported. The
         * image must be either a .png or .jpeg formatted file. </p> <p>The
         * <code>DetectText</code> operation returns text in an array of
         * <a>TextDetection</a> elements, <code>TextDetections</code>. Each
         * <code>TextDetection</code> element provides information about a single word or
         * line of text that was detected in the image. </p> <p>A word is one or more
         * script characters that are not separated by spaces. <code>DetectText</code> can
         * detect up to 100 words in an image.</p> <p>A line is a string of equally spaced
         * words. A line isn't necessarily a complete sentence. For example, a driver's
         * license number is detected as a line. A line ends when there is no aligned text
         * after it. Also, a line ends when there is a large gap between words, relative to
         * the length of the words. This means, depending on the gap between words, Amazon
         * Rekognition may detect multiple lines in text aligned in the same direction.
         * Periods don't represent the end of a line. If a sentence spans multiple lines,
         * the <code>DetectText</code> operation returns multiple lines.</p> <p>To
         * determine whether a <code>TextDetection</code> element is a line of text or a
         * word, use the <code>TextDetection</code> object <code>Type</code> field. </p>
         * <p>To be detected, text must be within +/- 90 degrees orientation of the
         * horizontal axis.</p> <p>For more information, see Detecting text in the Amazon
         * Rekognition Developer Guide.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/DetectText">AWS
         * API Reference</a></p>
         */
        virtual Model::DetectTextOutcome DetectText(const Model::DetectTextRequest& request) const;

        /**
         * A Callable wrapper for DetectText that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DetectTextRequestT = Model::DetectTextRequest>
        Model::DetectTextOutcomeCallable DetectTextCallable(const DetectTextRequestT& request) const
        {
            return SubmitCallable(&RekognitionClient::DetectText, request);
        }

        /**
         * An Async wrapper for DetectText that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DetectTextRequestT = Model::DetectTextRequest>
        void DetectTextAsync(const DetectTextRequestT& request, const DetectTextResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RekognitionClient::DetectText, request, handler, context);
        }

        /**
         * <p>Removes the association between a <code>Face</code> supplied in an array of
         * <code>FaceIds</code> and the User. If the User is not present already, then a
         * <code>ResourceNotFound</code> exception is thrown. If successful, an array of
         * faces that are disassociated from the User is returned. If a given face is
         * already disassociated from the given UserID, it will be ignored and not be
         * returned in the response. If a given face is already associated with a different
         * User or not found in the collection it will be returned as part of
         * <code>UnsuccessfulDisassociations</code>. You can remove 1 - 100 face IDs from a
         * user at one time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/DisassociateFaces">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateFacesOutcome DisassociateFaces(const Model::DisassociateFacesRequest& request) const;

        /**
         * A Callable wrapper for DisassociateFaces that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateFacesRequestT = Model::DisassociateFacesRequest>
        Model::DisassociateFacesOutcomeCallable DisassociateFacesCallable(const DisassociateFacesRequestT& request) const
        {
            return SubmitCallable(&RekognitionClient::DisassociateFaces, request);
        }

        /**
         * An Async wrapper for DisassociateFaces that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateFacesRequestT = Model::DisassociateFacesRequest>
        void DisassociateFacesAsync(const DisassociateFacesRequestT& request, const DisassociateFacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RekognitionClient::DisassociateFaces, request, handler, context);
        }

        /**
         *  <p>This operation applies only to Amazon Rekognition Custom Labels.</p>
         *  <p>Distributes the entries (images) in a training dataset across the
         * training dataset and the test dataset for a project.
         * <code>DistributeDatasetEntries</code> moves 20% of the training dataset images
         * to the test dataset. An entry is a JSON Line that describes an image. </p>
         * <p>You supply the Amazon Resource Names (ARN) of a project's training dataset
         * and test dataset. The training dataset must contain the images that you want to
         * split. The test dataset must be empty. The datasets must belong to the same
         * project. To create training and test datasets for a project, call
         * <a>CreateDataset</a>.</p> <p>Distributing a dataset takes a while to complete.
         * To check the status call <code>DescribeDataset</code>. The operation is complete
         * when the <code>Status</code> field for the training dataset and the test dataset
         * is <code>UPDATE_COMPLETE</code>. If the dataset split fails, the value of
         * <code>Status</code> is <code>UPDATE_FAILED</code>.</p> <p>This operation
         * requires permissions to perform the
         * <code>rekognition:DistributeDatasetEntries</code> action.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/DistributeDatasetEntries">AWS
         * API Reference</a></p>
         */
        virtual Model::DistributeDatasetEntriesOutcome DistributeDatasetEntries(const Model::DistributeDatasetEntriesRequest& request) const;

        /**
         * A Callable wrapper for DistributeDatasetEntries that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DistributeDatasetEntriesRequestT = Model::DistributeDatasetEntriesRequest>
        Model::DistributeDatasetEntriesOutcomeCallable DistributeDatasetEntriesCallable(const DistributeDatasetEntriesRequestT& request) const
        {
            return SubmitCallable(&RekognitionClient::DistributeDatasetEntries, request);
        }

        /**
         * An Async wrapper for DistributeDatasetEntries that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DistributeDatasetEntriesRequestT = Model::DistributeDatasetEntriesRequest>
        void DistributeDatasetEntriesAsync(const DistributeDatasetEntriesRequestT& request, const DistributeDatasetEntriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RekognitionClient::DistributeDatasetEntries, request, handler, context);
        }

        /**
         * <p>Gets the name and additional information about a celebrity based on their
         * Amazon Rekognition ID. The additional information is returned as an array of
         * URLs. If there is no additional information about the celebrity, this list is
         * empty.</p> <p>For more information, see Getting information about a celebrity in
         * the Amazon Rekognition Developer Guide.</p> <p>This operation requires
         * permissions to perform the <code>rekognition:GetCelebrityInfo</code> action.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/GetCelebrityInfo">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCelebrityInfoOutcome GetCelebrityInfo(const Model::GetCelebrityInfoRequest& request) const;

        /**
         * A Callable wrapper for GetCelebrityInfo that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetCelebrityInfoRequestT = Model::GetCelebrityInfoRequest>
        Model::GetCelebrityInfoOutcomeCallable GetCelebrityInfoCallable(const GetCelebrityInfoRequestT& request) const
        {
            return SubmitCallable(&RekognitionClient::GetCelebrityInfo, request);
        }

        /**
         * An Async wrapper for GetCelebrityInfo that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetCelebrityInfoRequestT = Model::GetCelebrityInfoRequest>
        void GetCelebrityInfoAsync(const GetCelebrityInfoRequestT& request, const GetCelebrityInfoResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RekognitionClient::GetCelebrityInfo, request, handler, context);
        }

        /**
         * <p>Gets the celebrity recognition results for a Amazon Rekognition Video
         * analysis started by <a>StartCelebrityRecognition</a>.</p> <p>Celebrity
         * recognition in a video is an asynchronous operation. Analysis is started by a
         * call to <a>StartCelebrityRecognition</a> which returns a job identifier
         * (<code>JobId</code>). </p> <p>When the celebrity recognition operation finishes,
         * Amazon Rekognition Video publishes a completion status to the Amazon Simple
         * Notification Service topic registered in the initial call to
         * <code>StartCelebrityRecognition</code>. To get the results of the celebrity
         * recognition analysis, first check that the status value published to the Amazon
         * SNS topic is <code>SUCCEEDED</code>. If so, call
         * <code>GetCelebrityDetection</code> and pass the job identifier
         * (<code>JobId</code>) from the initial call to
         * <code>StartCelebrityDetection</code>. </p> <p>For more information, see Working
         * With Stored Videos in the Amazon Rekognition Developer Guide.</p> <p>
         * <code>GetCelebrityRecognition</code> returns detected celebrities and the
         * time(s) they are detected in an array (<code>Celebrities</code>) of
         * <a>CelebrityRecognition</a> objects. Each <code>CelebrityRecognition</code>
         * contains information about the celebrity in a <a>CelebrityDetail</a> object and
         * the time, <code>Timestamp</code>, the celebrity was detected. This
         * <a>CelebrityDetail</a> object stores information about the detected celebrity's
         * face attributes, a face bounding box, known gender, the celebrity's name, and a
         * confidence estimate.</p>  <p> <code>GetCelebrityRecognition</code> only
         * returns the default facial attributes (<code>BoundingBox</code>,
         * <code>Confidence</code>, <code>Landmarks</code>, <code>Pose</code>, and
         * <code>Quality</code>). The <code>BoundingBox</code> field only applies to the
         * detected face instance. The other facial attributes listed in the
         * <code>Face</code> object of the following response syntax are not returned. For
         * more information, see FaceDetail in the Amazon Rekognition Developer Guide. </p>
         *  <p>By default, the <code>Celebrities</code> array is sorted by time
         * (milliseconds from the start of the video). You can also sort the array by
         * celebrity by specifying the value <code>ID</code> in the <code>SortBy</code>
         * input parameter.</p> <p>The <code>CelebrityDetail</code> object includes the
         * celebrity identifer and additional information urls. If you don't store the
         * additional information urls, you can get them later by calling
         * <a>GetCelebrityInfo</a> with the celebrity identifer.</p> <p>No information is
         * returned for faces not recognized as celebrities.</p> <p>Use MaxResults
         * parameter to limit the number of labels returned. If there are more results than
         * specified in <code>MaxResults</code>, the value of <code>NextToken</code> in the
         * operation response contains a pagination token for getting the next set of
         * results. To get the next page of results, call
         * <code>GetCelebrityDetection</code> and populate the <code>NextToken</code>
         * request parameter with the token value returned from the previous call to
         * <code>GetCelebrityRecognition</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/GetCelebrityRecognition">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCelebrityRecognitionOutcome GetCelebrityRecognition(const Model::GetCelebrityRecognitionRequest& request) const;

        /**
         * A Callable wrapper for GetCelebrityRecognition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetCelebrityRecognitionRequestT = Model::GetCelebrityRecognitionRequest>
        Model::GetCelebrityRecognitionOutcomeCallable GetCelebrityRecognitionCallable(const GetCelebrityRecognitionRequestT& request) const
        {
            return SubmitCallable(&RekognitionClient::GetCelebrityRecognition, request);
        }

        /**
         * An Async wrapper for GetCelebrityRecognition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetCelebrityRecognitionRequestT = Model::GetCelebrityRecognitionRequest>
        void GetCelebrityRecognitionAsync(const GetCelebrityRecognitionRequestT& request, const GetCelebrityRecognitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RekognitionClient::GetCelebrityRecognition, request, handler, context);
        }

        /**
         * <p>Gets the inappropriate, unwanted, or offensive content analysis results for a
         * Amazon Rekognition Video analysis started by <a>StartContentModeration</a>. For
         * a list of moderation labels in Amazon Rekognition, see <a
         * href="https://docs.aws.amazon.com/rekognition/latest/dg/moderation.html#moderation-api">Using
         * the image and video moderation APIs</a>.</p> <p>Amazon Rekognition Video
         * inappropriate or offensive content detection in a stored video is an
         * asynchronous operation. You start analysis by calling
         * <a>StartContentModeration</a> which returns a job identifier
         * (<code>JobId</code>). When analysis finishes, Amazon Rekognition Video publishes
         * a completion status to the Amazon Simple Notification Service topic registered
         * in the initial call to <code>StartContentModeration</code>. To get the results
         * of the content analysis, first check that the status value published to the
         * Amazon SNS topic is <code>SUCCEEDED</code>. If so, call
         * <code>GetContentModeration</code> and pass the job identifier
         * (<code>JobId</code>) from the initial call to
         * <code>StartContentModeration</code>. </p> <p>For more information, see Working
         * with Stored Videos in the Amazon Rekognition Devlopers Guide.</p> <p>
         * <code>GetContentModeration</code> returns detected inappropriate, unwanted, or
         * offensive content moderation labels, and the time they are detected, in an
         * array, <code>ModerationLabels</code>, of <a>ContentModerationDetection</a>
         * objects. </p> <p>By default, the moderated labels are returned sorted by time,
         * in milliseconds from the start of the video. You can also sort them by moderated
         * label by specifying <code>NAME</code> for the <code>SortBy</code> input
         * parameter. </p> <p>Since video analysis can return a large number of results,
         * use the <code>MaxResults</code> parameter to limit the number of labels returned
         * in a single call to <code>GetContentModeration</code>. If there are more results
         * than specified in <code>MaxResults</code>, the value of <code>NextToken</code>
         * in the operation response contains a pagination token for getting the next set
         * of results. To get the next page of results, call
         * <code>GetContentModeration</code> and populate the <code>NextToken</code>
         * request parameter with the value of <code>NextToken</code> returned from the
         * previous call to <code>GetContentModeration</code>.</p> <p>For more information,
         * see moderating content in the Amazon Rekognition Developer Guide.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/GetContentModeration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetContentModerationOutcome GetContentModeration(const Model::GetContentModerationRequest& request) const;

        /**
         * A Callable wrapper for GetContentModeration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetContentModerationRequestT = Model::GetContentModerationRequest>
        Model::GetContentModerationOutcomeCallable GetContentModerationCallable(const GetContentModerationRequestT& request) const
        {
            return SubmitCallable(&RekognitionClient::GetContentModeration, request);
        }

        /**
         * An Async wrapper for GetContentModeration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetContentModerationRequestT = Model::GetContentModerationRequest>
        void GetContentModerationAsync(const GetContentModerationRequestT& request, const GetContentModerationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RekognitionClient::GetContentModeration, request, handler, context);
        }

        /**
         * <p>Gets face detection results for a Amazon Rekognition Video analysis started
         * by <a>StartFaceDetection</a>.</p> <p>Face detection with Amazon Rekognition
         * Video is an asynchronous operation. You start face detection by calling
         * <a>StartFaceDetection</a> which returns a job identifier (<code>JobId</code>).
         * When the face detection operation finishes, Amazon Rekognition Video publishes a
         * completion status to the Amazon Simple Notification Service topic registered in
         * the initial call to <code>StartFaceDetection</code>. To get the results of the
         * face detection operation, first check that the status value published to the
         * Amazon SNS topic is <code>SUCCEEDED</code>. If so, call <a>GetFaceDetection</a>
         * and pass the job identifier (<code>JobId</code>) from the initial call to
         * <code>StartFaceDetection</code>.</p> <p> <code>GetFaceDetection</code> returns
         * an array of detected faces (<code>Faces</code>) sorted by the time the faces
         * were detected. </p> <p>Use MaxResults parameter to limit the number of labels
         * returned. If there are more results than specified in <code>MaxResults</code>,
         * the value of <code>NextToken</code> in the operation response contains a
         * pagination token for getting the next set of results. To get the next page of
         * results, call <code>GetFaceDetection</code> and populate the
         * <code>NextToken</code> request parameter with the token value returned from the
         * previous call to <code>GetFaceDetection</code>.</p> <p>Note that for the
         * <code>GetFaceDetection</code> operation, the returned values for
         * <code>FaceOccluded</code> and <code>EyeDirection</code> will always be
         * "null".</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/GetFaceDetection">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFaceDetectionOutcome GetFaceDetection(const Model::GetFaceDetectionRequest& request) const;

        /**
         * A Callable wrapper for GetFaceDetection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetFaceDetectionRequestT = Model::GetFaceDetectionRequest>
        Model::GetFaceDetectionOutcomeCallable GetFaceDetectionCallable(const GetFaceDetectionRequestT& request) const
        {
            return SubmitCallable(&RekognitionClient::GetFaceDetection, request);
        }

        /**
         * An Async wrapper for GetFaceDetection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetFaceDetectionRequestT = Model::GetFaceDetectionRequest>
        void GetFaceDetectionAsync(const GetFaceDetectionRequestT& request, const GetFaceDetectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RekognitionClient::GetFaceDetection, request, handler, context);
        }

        /**
         * <p>Retrieves the results of a specific Face Liveness session. It requires the
         * <code>sessionId</code> as input, which was created using
         * <code>CreateFaceLivenessSession</code>. Returns the corresponding Face Liveness
         * confidence score, a reference image that includes a face bounding box, and audit
         * images that also contain face bounding boxes. The Face Liveness confidence score
         * ranges from 0 to 100. </p> <p>The number of audit images returned by
         * <code>GetFaceLivenessSessionResults</code> is defined by the
         * <code>AuditImagesLimit</code> paramater when calling
         * <code>CreateFaceLivenessSession</code>. Reference images are always returned
         * when possible.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/GetFaceLivenessSessionResults">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFaceLivenessSessionResultsOutcome GetFaceLivenessSessionResults(const Model::GetFaceLivenessSessionResultsRequest& request) const;

        /**
         * A Callable wrapper for GetFaceLivenessSessionResults that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetFaceLivenessSessionResultsRequestT = Model::GetFaceLivenessSessionResultsRequest>
        Model::GetFaceLivenessSessionResultsOutcomeCallable GetFaceLivenessSessionResultsCallable(const GetFaceLivenessSessionResultsRequestT& request) const
        {
            return SubmitCallable(&RekognitionClient::GetFaceLivenessSessionResults, request);
        }

        /**
         * An Async wrapper for GetFaceLivenessSessionResults that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetFaceLivenessSessionResultsRequestT = Model::GetFaceLivenessSessionResultsRequest>
        void GetFaceLivenessSessionResultsAsync(const GetFaceLivenessSessionResultsRequestT& request, const GetFaceLivenessSessionResultsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RekognitionClient::GetFaceLivenessSessionResults, request, handler, context);
        }

        /**
         * <p>Gets the face search results for Amazon Rekognition Video face search started
         * by <a>StartFaceSearch</a>. The search returns faces in a collection that match
         * the faces of persons detected in a video. It also includes the time(s) that
         * faces are matched in the video.</p> <p>Face search in a video is an asynchronous
         * operation. You start face search by calling to <a>StartFaceSearch</a> which
         * returns a job identifier (<code>JobId</code>). When the search operation
         * finishes, Amazon Rekognition Video publishes a completion status to the Amazon
         * Simple Notification Service topic registered in the initial call to
         * <code>StartFaceSearch</code>. To get the search results, first check that the
         * status value published to the Amazon SNS topic is <code>SUCCEEDED</code>. If so,
         * call <code>GetFaceSearch</code> and pass the job identifier (<code>JobId</code>)
         * from the initial call to <code>StartFaceSearch</code>.</p> <p>For more
         * information, see Searching Faces in a Collection in the Amazon Rekognition
         * Developer Guide.</p> <p>The search results are retured in an array,
         * <code>Persons</code>, of <a>PersonMatch</a> objects.
         * Each<code>PersonMatch</code> element contains details about the matching faces
         * in the input collection, person information (facial attributes, bounding boxes,
         * and person identifer) for the matched person, and the time the person was
         * matched in the video.</p>  <p> <code>GetFaceSearch</code> only returns the
         * default facial attributes (<code>BoundingBox</code>, <code>Confidence</code>,
         * <code>Landmarks</code>, <code>Pose</code>, and <code>Quality</code>). The other
         * facial attributes listed in the <code>Face</code> object of the following
         * response syntax are not returned. For more information, see FaceDetail in the
         * Amazon Rekognition Developer Guide. </p>  <p>By default, the
         * <code>Persons</code> array is sorted by the time, in milliseconds from the start
         * of the video, persons are matched. You can also sort by persons by specifying
         * <code>INDEX</code> for the <code>SORTBY</code> input parameter.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/GetFaceSearch">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFaceSearchOutcome GetFaceSearch(const Model::GetFaceSearchRequest& request) const;

        /**
         * A Callable wrapper for GetFaceSearch that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetFaceSearchRequestT = Model::GetFaceSearchRequest>
        Model::GetFaceSearchOutcomeCallable GetFaceSearchCallable(const GetFaceSearchRequestT& request) const
        {
            return SubmitCallable(&RekognitionClient::GetFaceSearch, request);
        }

        /**
         * An Async wrapper for GetFaceSearch that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetFaceSearchRequestT = Model::GetFaceSearchRequest>
        void GetFaceSearchAsync(const GetFaceSearchRequestT& request, const GetFaceSearchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RekognitionClient::GetFaceSearch, request, handler, context);
        }

        /**
         * <p>Gets the label detection results of a Amazon Rekognition Video analysis
         * started by <a>StartLabelDetection</a>. </p> <p>The label detection operation is
         * started by a call to <a>StartLabelDetection</a> which returns a job identifier
         * (<code>JobId</code>). When the label detection operation finishes, Amazon
         * Rekognition publishes a completion status to the Amazon Simple Notification
         * Service topic registered in the initial call to
         * <code>StartlabelDetection</code>. </p> <p>To get the results of the label
         * detection operation, first check that the status value published to the Amazon
         * SNS topic is <code>SUCCEEDED</code>. If so, call <a>GetLabelDetection</a> and
         * pass the job identifier (<code>JobId</code>) from the initial call to
         * <code>StartLabelDetection</code>.</p> <p> <code>GetLabelDetection</code> returns
         * an array of detected labels (<code>Labels</code>) sorted by the time the labels
         * were detected. You can also sort by the label name by specifying
         * <code>NAME</code> for the <code>SortBy</code> input parameter. If there is no
         * <code>NAME</code> specified, the default sort is by timestamp.</p> <p>You can
         * select how results are aggregated by using the <code>AggregateBy</code> input
         * parameter. The default aggregation method is <code>TIMESTAMPS</code>. You can
         * also aggregate by <code>SEGMENTS</code>, which aggregates all instances of
         * labels detected in a given segment. </p> <p>The returned Labels array may
         * include the following attributes:</p> <ul> <li> <p>Name - The name of the
         * detected label.</p> </li> <li> <p>Confidence - The level of confidence in the
         * label assigned to a detected object. </p> </li> <li> <p>Parents - The ancestor
         * labels for a detected label. GetLabelDetection returns a hierarchical taxonomy
         * of detected labels. For example, a detected car might be assigned the label car.
         * The label car has two parent labels: Vehicle (its parent) and Transportation
         * (its grandparent). The response includes the all ancestors for a label, where
         * every ancestor is a unique label. In the previous example, Car, Vehicle, and
         * Transportation are returned as unique labels in the response. </p> </li> <li>
         * <p> Aliases - Possible Aliases for the label. </p> </li> <li> <p>Categories -
         * The label categories that the detected label belongs to.</p> </li> <li>
         * <p>BoundingBox — Bounding boxes are described for all instances of detected
         * common object labels, returned in an array of Instance objects. An Instance
         * object contains a BoundingBox object, describing the location of the label on
         * the input image. It also includes the confidence for the accuracy of the
         * detected bounding box.</p> </li> <li> <p>Timestamp - Time, in milliseconds from
         * the start of the video, that the label was detected. For aggregation by
         * <code>SEGMENTS</code>, the <code>StartTimestampMillis</code>,
         * <code>EndTimestampMillis</code>, and <code>DurationMillis</code> structures are
         * what define a segment. Although the “Timestamp” structure is still returned with
         * each label, its value is set to be the same as
         * <code>StartTimestampMillis</code>.</p> </li> </ul> <p>Timestamp and Bounding box
         * information are returned for detected Instances, only if aggregation is done by
         * <code>TIMESTAMPS</code>. If aggregating by <code>SEGMENTS</code>, information
         * about detected instances isn’t returned. </p> <p>The version of the label model
         * used for the detection is also returned.</p> <p> <b>Note
         * <code>DominantColors</code> isn't returned for <code>Instances</code>, although
         * it is shown as part of the response in the sample seen below.</b> </p> <p>Use
         * <code>MaxResults</code> parameter to limit the number of labels returned. If
         * there are more results than specified in <code>MaxResults</code>, the value of
         * <code>NextToken</code> in the operation response contains a pagination token for
         * getting the next set of results. To get the next page of results, call
         * <code>GetlabelDetection</code> and populate the <code>NextToken</code> request
         * parameter with the token value returned from the previous call to
         * <code>GetLabelDetection</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/GetLabelDetection">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLabelDetectionOutcome GetLabelDetection(const Model::GetLabelDetectionRequest& request) const;

        /**
         * A Callable wrapper for GetLabelDetection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetLabelDetectionRequestT = Model::GetLabelDetectionRequest>
        Model::GetLabelDetectionOutcomeCallable GetLabelDetectionCallable(const GetLabelDetectionRequestT& request) const
        {
            return SubmitCallable(&RekognitionClient::GetLabelDetection, request);
        }

        /**
         * An Async wrapper for GetLabelDetection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetLabelDetectionRequestT = Model::GetLabelDetectionRequest>
        void GetLabelDetectionAsync(const GetLabelDetectionRequestT& request, const GetLabelDetectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RekognitionClient::GetLabelDetection, request, handler, context);
        }

        /**
         * <p>Retrieves the results for a given media analysis job. Takes a
         * <code>JobId</code> returned by StartMediaAnalysisJob.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/GetMediaAnalysisJob">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMediaAnalysisJobOutcome GetMediaAnalysisJob(const Model::GetMediaAnalysisJobRequest& request) const;

        /**
         * A Callable wrapper for GetMediaAnalysisJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetMediaAnalysisJobRequestT = Model::GetMediaAnalysisJobRequest>
        Model::GetMediaAnalysisJobOutcomeCallable GetMediaAnalysisJobCallable(const GetMediaAnalysisJobRequestT& request) const
        {
            return SubmitCallable(&RekognitionClient::GetMediaAnalysisJob, request);
        }

        /**
         * An Async wrapper for GetMediaAnalysisJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetMediaAnalysisJobRequestT = Model::GetMediaAnalysisJobRequest>
        void GetMediaAnalysisJobAsync(const GetMediaAnalysisJobRequestT& request, const GetMediaAnalysisJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RekognitionClient::GetMediaAnalysisJob, request, handler, context);
        }

        /**
         * <p>Gets the path tracking results of a Amazon Rekognition Video analysis started
         * by <a>StartPersonTracking</a>.</p> <p>The person path tracking operation is
         * started by a call to <code>StartPersonTracking</code> which returns a job
         * identifier (<code>JobId</code>). When the operation finishes, Amazon Rekognition
         * Video publishes a completion status to the Amazon Simple Notification Service
         * topic registered in the initial call to <code>StartPersonTracking</code>.</p>
         * <p>To get the results of the person path tracking operation, first check that
         * the status value published to the Amazon SNS topic is <code>SUCCEEDED</code>. If
         * so, call <a>GetPersonTracking</a> and pass the job identifier
         * (<code>JobId</code>) from the initial call to
         * <code>StartPersonTracking</code>.</p> <p> <code>GetPersonTracking</code> returns
         * an array, <code>Persons</code>, of tracked persons and the time(s) their paths
         * were tracked in the video. </p>  <p> <code>GetPersonTracking</code> only
         * returns the default facial attributes (<code>BoundingBox</code>,
         * <code>Confidence</code>, <code>Landmarks</code>, <code>Pose</code>, and
         * <code>Quality</code>). The other facial attributes listed in the
         * <code>Face</code> object of the following response syntax are not returned. </p>
         * <p>For more information, see FaceDetail in the Amazon Rekognition Developer
         * Guide.</p>  <p>By default, the array is sorted by the time(s) a person's
         * path is tracked in the video. You can sort by tracked persons by specifying
         * <code>INDEX</code> for the <code>SortBy</code> input parameter.</p> <p>Use the
         * <code>MaxResults</code> parameter to limit the number of items returned. If
         * there are more results than specified in <code>MaxResults</code>, the value of
         * <code>NextToken</code> in the operation response contains a pagination token for
         * getting the next set of results. To get the next page of results, call
         * <code>GetPersonTracking</code> and populate the <code>NextToken</code> request
         * parameter with the token value returned from the previous call to
         * <code>GetPersonTracking</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/GetPersonTracking">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPersonTrackingOutcome GetPersonTracking(const Model::GetPersonTrackingRequest& request) const;

        /**
         * A Callable wrapper for GetPersonTracking that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetPersonTrackingRequestT = Model::GetPersonTrackingRequest>
        Model::GetPersonTrackingOutcomeCallable GetPersonTrackingCallable(const GetPersonTrackingRequestT& request) const
        {
            return SubmitCallable(&RekognitionClient::GetPersonTracking, request);
        }

        /**
         * An Async wrapper for GetPersonTracking that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetPersonTrackingRequestT = Model::GetPersonTrackingRequest>
        void GetPersonTrackingAsync(const GetPersonTrackingRequestT& request, const GetPersonTrackingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RekognitionClient::GetPersonTracking, request, handler, context);
        }

        /**
         * <p>Gets the segment detection results of a Amazon Rekognition Video analysis
         * started by <a>StartSegmentDetection</a>.</p> <p>Segment detection with Amazon
         * Rekognition Video is an asynchronous operation. You start segment detection by
         * calling <a>StartSegmentDetection</a> which returns a job identifier
         * (<code>JobId</code>). When the segment detection operation finishes, Amazon
         * Rekognition publishes a completion status to the Amazon Simple Notification
         * Service topic registered in the initial call to
         * <code>StartSegmentDetection</code>. To get the results of the segment detection
         * operation, first check that the status value published to the Amazon SNS topic
         * is <code>SUCCEEDED</code>. if so, call <code>GetSegmentDetection</code> and pass
         * the job identifier (<code>JobId</code>) from the initial call of
         * <code>StartSegmentDetection</code>.</p> <p> <code>GetSegmentDetection</code>
         * returns detected segments in an array (<code>Segments</code>) of
         * <a>SegmentDetection</a> objects. <code>Segments</code> is sorted by the segment
         * types specified in the <code>SegmentTypes</code> input parameter of
         * <code>StartSegmentDetection</code>. Each element of the array includes the
         * detected segment, the precentage confidence in the acuracy of the detected
         * segment, the type of the segment, and the frame in which the segment was
         * detected.</p> <p>Use <code>SelectedSegmentTypes</code> to find out the type of
         * segment detection requested in the call to
         * <code>StartSegmentDetection</code>.</p> <p>Use the <code>MaxResults</code>
         * parameter to limit the number of segment detections returned. If there are more
         * results than specified in <code>MaxResults</code>, the value of
         * <code>NextToken</code> in the operation response contains a pagination token for
         * getting the next set of results. To get the next page of results, call
         * <code>GetSegmentDetection</code> and populate the <code>NextToken</code> request
         * parameter with the token value returned from the previous call to
         * <code>GetSegmentDetection</code>.</p> <p>For more information, see Detecting
         * video segments in stored video in the Amazon Rekognition Developer
         * Guide.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/GetSegmentDetection">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSegmentDetectionOutcome GetSegmentDetection(const Model::GetSegmentDetectionRequest& request) const;

        /**
         * A Callable wrapper for GetSegmentDetection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSegmentDetectionRequestT = Model::GetSegmentDetectionRequest>
        Model::GetSegmentDetectionOutcomeCallable GetSegmentDetectionCallable(const GetSegmentDetectionRequestT& request) const
        {
            return SubmitCallable(&RekognitionClient::GetSegmentDetection, request);
        }

        /**
         * An Async wrapper for GetSegmentDetection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSegmentDetectionRequestT = Model::GetSegmentDetectionRequest>
        void GetSegmentDetectionAsync(const GetSegmentDetectionRequestT& request, const GetSegmentDetectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RekognitionClient::GetSegmentDetection, request, handler, context);
        }

        /**
         * <p>Gets the text detection results of a Amazon Rekognition Video analysis
         * started by <a>StartTextDetection</a>.</p> <p>Text detection with Amazon
         * Rekognition Video is an asynchronous operation. You start text detection by
         * calling <a>StartTextDetection</a> which returns a job identifier
         * (<code>JobId</code>) When the text detection operation finishes, Amazon
         * Rekognition publishes a completion status to the Amazon Simple Notification
         * Service topic registered in the initial call to <code>StartTextDetection</code>.
         * To get the results of the text detection operation, first check that the status
         * value published to the Amazon SNS topic is <code>SUCCEEDED</code>. if so, call
         * <code>GetTextDetection</code> and pass the job identifier (<code>JobId</code>)
         * from the initial call of <code>StartLabelDetection</code>.</p> <p>
         * <code>GetTextDetection</code> returns an array of detected text
         * (<code>TextDetections</code>) sorted by the time the text was detected, up to
         * 100 words per frame of video.</p> <p>Each element of the array includes the
         * detected text, the precentage confidence in the acuracy of the detected text,
         * the time the text was detected, bounding box information for where the text was
         * located, and unique identifiers for words and their lines.</p> <p>Use MaxResults
         * parameter to limit the number of text detections returned. If there are more
         * results than specified in <code>MaxResults</code>, the value of
         * <code>NextToken</code> in the operation response contains a pagination token for
         * getting the next set of results. To get the next page of results, call
         * <code>GetTextDetection</code> and populate the <code>NextToken</code> request
         * parameter with the token value returned from the previous call to
         * <code>GetTextDetection</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/GetTextDetection">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTextDetectionOutcome GetTextDetection(const Model::GetTextDetectionRequest& request) const;

        /**
         * A Callable wrapper for GetTextDetection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetTextDetectionRequestT = Model::GetTextDetectionRequest>
        Model::GetTextDetectionOutcomeCallable GetTextDetectionCallable(const GetTextDetectionRequestT& request) const
        {
            return SubmitCallable(&RekognitionClient::GetTextDetection, request);
        }

        /**
         * An Async wrapper for GetTextDetection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetTextDetectionRequestT = Model::GetTextDetectionRequest>
        void GetTextDetectionAsync(const GetTextDetectionRequestT& request, const GetTextDetectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RekognitionClient::GetTextDetection, request, handler, context);
        }

        /**
         * <p>Detects faces in the input image and adds them to the specified collection.
         * </p> <p>Amazon Rekognition doesn't save the actual faces that are detected.
         * Instead, the underlying detection algorithm first detects the faces in the input
         * image. For each face, the algorithm extracts facial features into a feature
         * vector, and stores it in the backend database. Amazon Rekognition uses feature
         * vectors when it performs face match and search operations using the
         * <a>SearchFaces</a> and <a>SearchFacesByImage</a> operations.</p> <p>For more
         * information, see Adding faces to a collection in the Amazon Rekognition
         * Developer Guide.</p> <p>To get the number of faces in a collection, call
         * <a>DescribeCollection</a>. </p> <p>If you're using version 1.0 of the face
         * detection model, <code>IndexFaces</code> indexes the 15 largest faces in the
         * input image. Later versions of the face detection model index the 100 largest
         * faces in the input image. </p> <p>If you're using version 4 or later of the face
         * model, image orientation information is not returned in the
         * <code>OrientationCorrection</code> field. </p> <p>To determine which version of
         * the model you're using, call <a>DescribeCollection</a> and supply the collection
         * ID. You can also get the model version from the value of
         * <code>FaceModelVersion</code> in the response from <code>IndexFaces</code> </p>
         * <p>For more information, see Model Versioning in the Amazon Rekognition
         * Developer Guide.</p> <p>If you provide the optional <code>ExternalImageId</code>
         * for the input image you provided, Amazon Rekognition associates this ID with all
         * faces that it detects. When you call the <a>ListFaces</a> operation, the
         * response returns the external ID. You can use this external image ID to create a
         * client-side index to associate the faces with each image. You can then use the
         * index to find all faces in an image.</p> <p>You can specify the maximum number
         * of faces to index with the <code>MaxFaces</code> input parameter. This is useful
         * when you want to index the largest faces in an image and don't want to index
         * smaller faces, such as those belonging to people standing in the background.</p>
         * <p>The <code>QualityFilter</code> input parameter allows you to filter out
         * detected faces that don’t meet a required quality bar. The quality bar is based
         * on a variety of common use cases. By default, <code>IndexFaces</code> chooses
         * the quality bar that's used to filter faces. You can also explicitly choose the
         * quality bar. Use <code>QualityFilter</code>, to set the quality bar by
         * specifying <code>LOW</code>, <code>MEDIUM</code>, or <code>HIGH</code>. If you
         * do not want to filter detected faces, specify <code>NONE</code>. </p> 
         * <p>To use quality filtering, you need a collection associated with version 3 of
         * the face model or higher. To get the version of the face model associated with a
         * collection, call <a>DescribeCollection</a>. </p>  <p>Information about
         * faces detected in an image, but not indexed, is returned in an array of
         * <a>UnindexedFace</a> objects, <code>UnindexedFaces</code>. Faces aren't indexed
         * for reasons such as:</p> <ul> <li> <p>The number of faces detected exceeds the
         * value of the <code>MaxFaces</code> request parameter.</p> </li> <li> <p>The face
         * is too small compared to the image dimensions.</p> </li> <li> <p>The face is too
         * blurry.</p> </li> <li> <p>The image is too dark.</p> </li> <li> <p>The face has
         * an extreme pose.</p> </li> <li> <p>The face doesn’t have enough detail to be
         * suitable for face search.</p> </li> </ul> <p>In response, the
         * <code>IndexFaces</code> operation returns an array of metadata for all detected
         * faces, <code>FaceRecords</code>. This includes: </p> <ul> <li> <p>The bounding
         * box, <code>BoundingBox</code>, of the detected face. </p> </li> <li> <p>A
         * confidence value, <code>Confidence</code>, which indicates the confidence that
         * the bounding box contains a face.</p> </li> <li> <p>A face ID,
         * <code>FaceId</code>, assigned by the service for each face that's detected and
         * stored.</p> </li> <li> <p>An image ID, <code>ImageId</code>, assigned by the
         * service for the input image.</p> </li> </ul> <p>If you request <code>ALL</code>
         * or specific facial attributes (e.g., <code>FACE_OCCLUDED</code>) by using the
         * detectionAttributes parameter, Amazon Rekognition returns detailed facial
         * attributes, such as facial landmarks (for example, location of eye and mouth),
         * facial occlusion, and other facial attributes.</p> <p>If you provide the same
         * image, specify the same collection, and use the same external ID in the
         * <code>IndexFaces</code> operation, Amazon Rekognition doesn't save duplicate
         * face metadata.</p> <p/> <p>The input image is passed either as base64-encoded
         * image bytes, or as a reference to an image in an Amazon S3 bucket. If you use
         * the AWS CLI to call Amazon Rekognition operations, passing image bytes isn't
         * supported. The image must be formatted as a PNG or JPEG file. </p> <p>This
         * operation requires permissions to perform the
         * <code>rekognition:IndexFaces</code> action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/IndexFaces">AWS
         * API Reference</a></p>
         */
        virtual Model::IndexFacesOutcome IndexFaces(const Model::IndexFacesRequest& request) const;

        /**
         * A Callable wrapper for IndexFaces that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename IndexFacesRequestT = Model::IndexFacesRequest>
        Model::IndexFacesOutcomeCallable IndexFacesCallable(const IndexFacesRequestT& request) const
        {
            return SubmitCallable(&RekognitionClient::IndexFaces, request);
        }

        /**
         * An Async wrapper for IndexFaces that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename IndexFacesRequestT = Model::IndexFacesRequest>
        void IndexFacesAsync(const IndexFacesRequestT& request, const IndexFacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RekognitionClient::IndexFaces, request, handler, context);
        }

        /**
         * <p>Returns list of collection IDs in your account. If the result is truncated,
         * the response also provides a <code>NextToken</code> that you can use in the
         * subsequent request to fetch the next set of collection IDs.</p> <p>For an
         * example, see Listing collections in the Amazon Rekognition Developer Guide.</p>
         * <p>This operation requires permissions to perform the
         * <code>rekognition:ListCollections</code> action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/ListCollections">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCollectionsOutcome ListCollections(const Model::ListCollectionsRequest& request) const;

        /**
         * A Callable wrapper for ListCollections that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListCollectionsRequestT = Model::ListCollectionsRequest>
        Model::ListCollectionsOutcomeCallable ListCollectionsCallable(const ListCollectionsRequestT& request) const
        {
            return SubmitCallable(&RekognitionClient::ListCollections, request);
        }

        /**
         * An Async wrapper for ListCollections that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListCollectionsRequestT = Model::ListCollectionsRequest>
        void ListCollectionsAsync(const ListCollectionsRequestT& request, const ListCollectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RekognitionClient::ListCollections, request, handler, context);
        }

        /**
         *  <p>This operation applies only to Amazon Rekognition Custom Labels.</p>
         *  <p> Lists the entries (images) within a dataset. An entry is a JSON Line
         * that contains the information for a single image, including the image location,
         * assigned labels, and object location bounding boxes. For more information, see
         * <a
         * href="https://docs.aws.amazon.com/rekognition/latest/customlabels-dg/md-manifest-files.html">Creating
         * a manifest file</a>.</p> <p>JSON Lines in the response include information about
         * non-terminal errors found in the dataset. Non terminal errors are reported in
         * <code>errors</code> lists within each JSON Line. The same information is
         * reported in the training and testing validation result manifests that Amazon
         * Rekognition Custom Labels creates during model training. </p> <p>You can filter
         * the response in variety of ways, such as choosing which labels to return and
         * returning JSON Lines created after a specific date. </p> <p>This operation
         * requires permissions to perform the <code>rekognition:ListDatasetEntries</code>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/ListDatasetEntries">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDatasetEntriesOutcome ListDatasetEntries(const Model::ListDatasetEntriesRequest& request) const;

        /**
         * A Callable wrapper for ListDatasetEntries that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDatasetEntriesRequestT = Model::ListDatasetEntriesRequest>
        Model::ListDatasetEntriesOutcomeCallable ListDatasetEntriesCallable(const ListDatasetEntriesRequestT& request) const
        {
            return SubmitCallable(&RekognitionClient::ListDatasetEntries, request);
        }

        /**
         * An Async wrapper for ListDatasetEntries that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDatasetEntriesRequestT = Model::ListDatasetEntriesRequest>
        void ListDatasetEntriesAsync(const ListDatasetEntriesRequestT& request, const ListDatasetEntriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RekognitionClient::ListDatasetEntries, request, handler, context);
        }

        /**
         *  <p>This operation applies only to Amazon Rekognition Custom Labels.</p>
         *  <p>Lists the labels in a dataset. Amazon Rekognition Custom Labels uses
         * labels to describe images. For more information, see <a
         * href="https://docs.aws.amazon.com/rekognition/latest/customlabels-dg/md-labeling-images.html">Labeling
         * images</a>. </p> <p> Lists the labels in a dataset. Amazon Rekognition Custom
         * Labels uses labels to describe images. For more information, see Labeling images
         * in the <i>Amazon Rekognition Custom Labels Developer Guide</i>. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/ListDatasetLabels">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDatasetLabelsOutcome ListDatasetLabels(const Model::ListDatasetLabelsRequest& request) const;

        /**
         * A Callable wrapper for ListDatasetLabels that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDatasetLabelsRequestT = Model::ListDatasetLabelsRequest>
        Model::ListDatasetLabelsOutcomeCallable ListDatasetLabelsCallable(const ListDatasetLabelsRequestT& request) const
        {
            return SubmitCallable(&RekognitionClient::ListDatasetLabels, request);
        }

        /**
         * An Async wrapper for ListDatasetLabels that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDatasetLabelsRequestT = Model::ListDatasetLabelsRequest>
        void ListDatasetLabelsAsync(const ListDatasetLabelsRequestT& request, const ListDatasetLabelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RekognitionClient::ListDatasetLabels, request, handler, context);
        }

        /**
         * <p>Returns metadata for faces in the specified collection. This metadata
         * includes information such as the bounding box coordinates, the confidence (that
         * the bounding box contains a face), and face ID. For an example, see Listing
         * Faces in a Collection in the Amazon Rekognition Developer Guide.</p> <p>This
         * operation requires permissions to perform the <code>rekognition:ListFaces</code>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/ListFaces">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFacesOutcome ListFaces(const Model::ListFacesRequest& request) const;

        /**
         * A Callable wrapper for ListFaces that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListFacesRequestT = Model::ListFacesRequest>
        Model::ListFacesOutcomeCallable ListFacesCallable(const ListFacesRequestT& request) const
        {
            return SubmitCallable(&RekognitionClient::ListFaces, request);
        }

        /**
         * An Async wrapper for ListFaces that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListFacesRequestT = Model::ListFacesRequest>
        void ListFacesAsync(const ListFacesRequestT& request, const ListFacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RekognitionClient::ListFaces, request, handler, context);
        }

        /**
         * <p>Returns a list of media analysis jobs. Results are sorted by
         * <code>CreationTimestamp</code> in descending order.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/ListMediaAnalysisJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMediaAnalysisJobsOutcome ListMediaAnalysisJobs(const Model::ListMediaAnalysisJobsRequest& request) const;

        /**
         * A Callable wrapper for ListMediaAnalysisJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListMediaAnalysisJobsRequestT = Model::ListMediaAnalysisJobsRequest>
        Model::ListMediaAnalysisJobsOutcomeCallable ListMediaAnalysisJobsCallable(const ListMediaAnalysisJobsRequestT& request) const
        {
            return SubmitCallable(&RekognitionClient::ListMediaAnalysisJobs, request);
        }

        /**
         * An Async wrapper for ListMediaAnalysisJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListMediaAnalysisJobsRequestT = Model::ListMediaAnalysisJobsRequest>
        void ListMediaAnalysisJobsAsync(const ListMediaAnalysisJobsRequestT& request, const ListMediaAnalysisJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RekognitionClient::ListMediaAnalysisJobs, request, handler, context);
        }

        /**
         *  <p>This operation applies only to Amazon Rekognition Custom Labels.</p>
         *  <p>Gets a list of the project policies attached to a project.</p> <p>To
         * attach a project policy to a project, call <a>PutProjectPolicy</a>. To remove a
         * project policy from a project, call <a>DeleteProjectPolicy</a>.</p> <p>This
         * operation requires permissions to perform the
         * <code>rekognition:ListProjectPolicies</code> action.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/ListProjectPolicies">AWS
         * API Reference</a></p>
         */
        virtual Model::ListProjectPoliciesOutcome ListProjectPolicies(const Model::ListProjectPoliciesRequest& request) const;

        /**
         * A Callable wrapper for ListProjectPolicies that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListProjectPoliciesRequestT = Model::ListProjectPoliciesRequest>
        Model::ListProjectPoliciesOutcomeCallable ListProjectPoliciesCallable(const ListProjectPoliciesRequestT& request) const
        {
            return SubmitCallable(&RekognitionClient::ListProjectPolicies, request);
        }

        /**
         * An Async wrapper for ListProjectPolicies that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListProjectPoliciesRequestT = Model::ListProjectPoliciesRequest>
        void ListProjectPoliciesAsync(const ListProjectPoliciesRequestT& request, const ListProjectPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RekognitionClient::ListProjectPolicies, request, handler, context);
        }

        /**
         * <p>Gets a list of stream processors that you have created with
         * <a>CreateStreamProcessor</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/ListStreamProcessors">AWS
         * API Reference</a></p>
         */
        virtual Model::ListStreamProcessorsOutcome ListStreamProcessors(const Model::ListStreamProcessorsRequest& request) const;

        /**
         * A Callable wrapper for ListStreamProcessors that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListStreamProcessorsRequestT = Model::ListStreamProcessorsRequest>
        Model::ListStreamProcessorsOutcomeCallable ListStreamProcessorsCallable(const ListStreamProcessorsRequestT& request) const
        {
            return SubmitCallable(&RekognitionClient::ListStreamProcessors, request);
        }

        /**
         * An Async wrapper for ListStreamProcessors that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListStreamProcessorsRequestT = Model::ListStreamProcessorsRequest>
        void ListStreamProcessorsAsync(const ListStreamProcessorsRequestT& request, const ListStreamProcessorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RekognitionClient::ListStreamProcessors, request, handler, context);
        }

        /**
         * <p> Returns a list of tags in an Amazon Rekognition collection, stream
         * processor, or Custom Labels model. </p> <p>This operation requires permissions
         * to perform the <code>rekognition:ListTagsForResource</code> action.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&RekognitionClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RekognitionClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Returns metadata of the User such as <code>UserID</code> in the specified
         * collection. Anonymous User (to reserve faces without any identity) is not
         * returned as part of this request. The results are sorted by system generated
         * primary key ID. If the response is truncated, <code>NextToken</code> is returned
         * in the response that can be used in the subsequent request to retrieve the next
         * set of identities.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/ListUsers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListUsersOutcome ListUsers(const Model::ListUsersRequest& request) const;

        /**
         * A Callable wrapper for ListUsers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListUsersRequestT = Model::ListUsersRequest>
        Model::ListUsersOutcomeCallable ListUsersCallable(const ListUsersRequestT& request) const
        {
            return SubmitCallable(&RekognitionClient::ListUsers, request);
        }

        /**
         * An Async wrapper for ListUsers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListUsersRequestT = Model::ListUsersRequest>
        void ListUsersAsync(const ListUsersRequestT& request, const ListUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RekognitionClient::ListUsers, request, handler, context);
        }

        /**
         *  <p>This operation applies only to Amazon Rekognition Custom Labels.</p>
         *  <p>Attaches a project policy to a Amazon Rekognition Custom Labels
         * project in a trusting AWS account. A project policy specifies that a trusted AWS
         * account can copy a model version from a trusting AWS account to a project in the
         * trusted AWS account. To copy a model version you use the
         * <a>CopyProjectVersion</a> operation. Only applies to Custom Labels projects.</p>
         * <p>For more information about the format of a project policy document, see
         * Attaching a project policy (SDK) in the <i>Amazon Rekognition Custom Labels
         * Developer Guide</i>. </p> <p>The response from <code>PutProjectPolicy</code> is
         * a revision ID for the project policy. You can attach multiple project policies
         * to a project. You can also update an existing project policy by specifying the
         * policy revision ID of the existing policy.</p> <p>To remove a project policy
         * from a project, call <a>DeleteProjectPolicy</a>. To get a list of project
         * policies attached to a project, call <a>ListProjectPolicies</a>. </p> <p>You
         * copy a model version by calling <a>CopyProjectVersion</a>.</p> <p>This operation
         * requires permissions to perform the <code>rekognition:PutProjectPolicy</code>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/PutProjectPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutProjectPolicyOutcome PutProjectPolicy(const Model::PutProjectPolicyRequest& request) const;

        /**
         * A Callable wrapper for PutProjectPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutProjectPolicyRequestT = Model::PutProjectPolicyRequest>
        Model::PutProjectPolicyOutcomeCallable PutProjectPolicyCallable(const PutProjectPolicyRequestT& request) const
        {
            return SubmitCallable(&RekognitionClient::PutProjectPolicy, request);
        }

        /**
         * An Async wrapper for PutProjectPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutProjectPolicyRequestT = Model::PutProjectPolicyRequest>
        void PutProjectPolicyAsync(const PutProjectPolicyRequestT& request, const PutProjectPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RekognitionClient::PutProjectPolicy, request, handler, context);
        }

        /**
         * <p>Returns an array of celebrities recognized in the input image. For more
         * information, see Recognizing celebrities in the Amazon Rekognition Developer
         * Guide. </p> <p> <code>RecognizeCelebrities</code> returns the 64 largest faces
         * in the image. It lists the recognized celebrities in the
         * <code>CelebrityFaces</code> array and any unrecognized faces in the
         * <code>UnrecognizedFaces</code> array. <code>RecognizeCelebrities</code> doesn't
         * return celebrities whose faces aren't among the largest 64 faces in the
         * image.</p> <p>For each celebrity recognized, <code>RecognizeCelebrities</code>
         * returns a <code>Celebrity</code> object. The <code>Celebrity</code> object
         * contains the celebrity name, ID, URL links to additional information, match
         * confidence, and a <code>ComparedFace</code> object that you can use to locate
         * the celebrity's face on the image.</p> <p>Amazon Rekognition doesn't retain
         * information about which images a celebrity has been recognized in. Your
         * application must store this information and use the <code>Celebrity</code> ID
         * property as a unique identifier for the celebrity. If you don't store the
         * celebrity name or additional information URLs returned by
         * <code>RecognizeCelebrities</code>, you will need the ID to identify the
         * celebrity in a call to the <a>GetCelebrityInfo</a> operation.</p> <p>You pass
         * the input image either as base64-encoded image bytes or as a reference to an
         * image in an Amazon S3 bucket. If you use the AWS CLI to call Amazon Rekognition
         * operations, passing image bytes is not supported. The image must be either a PNG
         * or JPEG formatted file. </p> <p>For an example, see Recognizing celebrities in
         * an image in the Amazon Rekognition Developer Guide.</p> <p>This operation
         * requires permissions to perform the
         * <code>rekognition:RecognizeCelebrities</code> operation.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/RecognizeCelebrities">AWS
         * API Reference</a></p>
         */
        virtual Model::RecognizeCelebritiesOutcome RecognizeCelebrities(const Model::RecognizeCelebritiesRequest& request) const;

        /**
         * A Callable wrapper for RecognizeCelebrities that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RecognizeCelebritiesRequestT = Model::RecognizeCelebritiesRequest>
        Model::RecognizeCelebritiesOutcomeCallable RecognizeCelebritiesCallable(const RecognizeCelebritiesRequestT& request) const
        {
            return SubmitCallable(&RekognitionClient::RecognizeCelebrities, request);
        }

        /**
         * An Async wrapper for RecognizeCelebrities that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RecognizeCelebritiesRequestT = Model::RecognizeCelebritiesRequest>
        void RecognizeCelebritiesAsync(const RecognizeCelebritiesRequestT& request, const RecognizeCelebritiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RekognitionClient::RecognizeCelebrities, request, handler, context);
        }

        /**
         * <p>For a given input face ID, searches for matching faces in the collection the
         * face belongs to. You get a face ID when you add a face to the collection using
         * the <a>IndexFaces</a> operation. The operation compares the features of the
         * input face with faces in the specified collection. </p>  <p>You can also
         * search faces without indexing faces by using the <code>SearchFacesByImage</code>
         * operation.</p>  <p> The operation response returns an array of faces that
         * match, ordered by similarity score with the highest similarity first. More
         * specifically, it is an array of metadata for each face match that is found.
         * Along with the metadata, the response also includes a <code>confidence</code>
         * value for each face match, indicating the confidence that the specific face
         * matches the input face. </p> <p>For an example, see Searching for a face using
         * its face ID in the Amazon Rekognition Developer Guide.</p> <p>This operation
         * requires permissions to perform the <code>rekognition:SearchFaces</code>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/SearchFaces">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchFacesOutcome SearchFaces(const Model::SearchFacesRequest& request) const;

        /**
         * A Callable wrapper for SearchFaces that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SearchFacesRequestT = Model::SearchFacesRequest>
        Model::SearchFacesOutcomeCallable SearchFacesCallable(const SearchFacesRequestT& request) const
        {
            return SubmitCallable(&RekognitionClient::SearchFaces, request);
        }

        /**
         * An Async wrapper for SearchFaces that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SearchFacesRequestT = Model::SearchFacesRequest>
        void SearchFacesAsync(const SearchFacesRequestT& request, const SearchFacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RekognitionClient::SearchFaces, request, handler, context);
        }

        /**
         * <p>For a given input image, first detects the largest face in the image, and
         * then searches the specified collection for matching faces. The operation
         * compares the features of the input face with faces in the specified collection.
         * </p>  <p>To search for all faces in an input image, you might first call
         * the <a>IndexFaces</a> operation, and then use the face IDs returned in
         * subsequent calls to the <a>SearchFaces</a> operation. </p> <p> You can also call
         * the <code>DetectFaces</code> operation and use the bounding boxes in the
         * response to make face crops, which then you can pass in to the
         * <code>SearchFacesByImage</code> operation. </p>  <p>You pass the input
         * image either as base64-encoded image bytes or as a reference to an image in an
         * Amazon S3 bucket. If you use the AWS CLI to call Amazon Rekognition operations,
         * passing image bytes is not supported. The image must be either a PNG or JPEG
         * formatted file. </p> <p> The response returns an array of faces that match,
         * ordered by similarity score with the highest similarity first. More
         * specifically, it is an array of metadata for each face match found. Along with
         * the metadata, the response also includes a <code>similarity</code> indicating
         * how similar the face is to the input face. In the response, the operation also
         * returns the bounding box (and a confidence level that the bounding box contains
         * a face) of the face that Amazon Rekognition used for the input image. </p> <p>If
         * no faces are detected in the input image, <code>SearchFacesByImage</code>
         * returns an <code>InvalidParameterException</code> error. </p> <p>For an example,
         * Searching for a Face Using an Image in the Amazon Rekognition Developer
         * Guide.</p> <p>The <code>QualityFilter</code> input parameter allows you to
         * filter out detected faces that don’t meet a required quality bar. The quality
         * bar is based on a variety of common use cases. Use <code>QualityFilter</code> to
         * set the quality bar for filtering by specifying <code>LOW</code>,
         * <code>MEDIUM</code>, or <code>HIGH</code>. If you do not want to filter detected
         * faces, specify <code>NONE</code>. The default value is <code>NONE</code>.</p>
         *  <p>To use quality filtering, you need a collection associated with
         * version 3 of the face model or higher. To get the version of the face model
         * associated with a collection, call <a>DescribeCollection</a>. </p> 
         * <p>This operation requires permissions to perform the
         * <code>rekognition:SearchFacesByImage</code> action.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/SearchFacesByImage">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchFacesByImageOutcome SearchFacesByImage(const Model::SearchFacesByImageRequest& request) const;

        /**
         * A Callable wrapper for SearchFacesByImage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SearchFacesByImageRequestT = Model::SearchFacesByImageRequest>
        Model::SearchFacesByImageOutcomeCallable SearchFacesByImageCallable(const SearchFacesByImageRequestT& request) const
        {
            return SubmitCallable(&RekognitionClient::SearchFacesByImage, request);
        }

        /**
         * An Async wrapper for SearchFacesByImage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SearchFacesByImageRequestT = Model::SearchFacesByImageRequest>
        void SearchFacesByImageAsync(const SearchFacesByImageRequestT& request, const SearchFacesByImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RekognitionClient::SearchFacesByImage, request, handler, context);
        }

        /**
         * <p>Searches for UserIDs within a collection based on a <code>FaceId</code> or
         * <code>UserId</code>. This API can be used to find the closest UserID (with a
         * highest similarity) to associate a face. The request must be provided with
         * either <code>FaceId</code> or <code>UserId</code>. The operation returns an
         * array of UserID that match the <code>FaceId</code> or <code>UserId</code>,
         * ordered by similarity score with the highest similarity first. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/SearchUsers">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchUsersOutcome SearchUsers(const Model::SearchUsersRequest& request) const;

        /**
         * A Callable wrapper for SearchUsers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SearchUsersRequestT = Model::SearchUsersRequest>
        Model::SearchUsersOutcomeCallable SearchUsersCallable(const SearchUsersRequestT& request) const
        {
            return SubmitCallable(&RekognitionClient::SearchUsers, request);
        }

        /**
         * An Async wrapper for SearchUsers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SearchUsersRequestT = Model::SearchUsersRequest>
        void SearchUsersAsync(const SearchUsersRequestT& request, const SearchUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RekognitionClient::SearchUsers, request, handler, context);
        }

        /**
         * <p>Searches for UserIDs using a supplied image. It first detects the largest
         * face in the image, and then searches a specified collection for matching
         * UserIDs. </p> <p>The operation returns an array of UserIDs that match the face
         * in the supplied image, ordered by similarity score with the highest similarity
         * first. It also returns a bounding box for the face found in the input image.
         * </p> <p>Information about faces detected in the supplied image, but not used for
         * the search, is returned in an array of <code>UnsearchedFace</code> objects. If
         * no valid face is detected in the image, the response will contain an empty
         * <code>UserMatches</code> list and no <code>SearchedFace</code> object.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/SearchUsersByImage">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchUsersByImageOutcome SearchUsersByImage(const Model::SearchUsersByImageRequest& request) const;

        /**
         * A Callable wrapper for SearchUsersByImage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SearchUsersByImageRequestT = Model::SearchUsersByImageRequest>
        Model::SearchUsersByImageOutcomeCallable SearchUsersByImageCallable(const SearchUsersByImageRequestT& request) const
        {
            return SubmitCallable(&RekognitionClient::SearchUsersByImage, request);
        }

        /**
         * An Async wrapper for SearchUsersByImage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SearchUsersByImageRequestT = Model::SearchUsersByImageRequest>
        void SearchUsersByImageAsync(const SearchUsersByImageRequestT& request, const SearchUsersByImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RekognitionClient::SearchUsersByImage, request, handler, context);
        }

        /**
         * <p>Starts asynchronous recognition of celebrities in a stored video.</p>
         * <p>Amazon Rekognition Video can detect celebrities in a video must be stored in
         * an Amazon S3 bucket. Use <a>Video</a> to specify the bucket name and the
         * filename of the video. <code>StartCelebrityRecognition</code> returns a job
         * identifier (<code>JobId</code>) which you use to get the results of the
         * analysis. When celebrity recognition analysis is finished, Amazon Rekognition
         * Video publishes a completion status to the Amazon Simple Notification Service
         * topic that you specify in <code>NotificationChannel</code>. To get the results
         * of the celebrity recognition analysis, first check that the status value
         * published to the Amazon SNS topic is <code>SUCCEEDED</code>. If so, call
         * <a>GetCelebrityRecognition</a> and pass the job identifier (<code>JobId</code>)
         * from the initial call to <code>StartCelebrityRecognition</code>. </p> <p>For
         * more information, see Recognizing celebrities in the Amazon Rekognition
         * Developer Guide.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/StartCelebrityRecognition">AWS
         * API Reference</a></p>
         */
        virtual Model::StartCelebrityRecognitionOutcome StartCelebrityRecognition(const Model::StartCelebrityRecognitionRequest& request) const;

        /**
         * A Callable wrapper for StartCelebrityRecognition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartCelebrityRecognitionRequestT = Model::StartCelebrityRecognitionRequest>
        Model::StartCelebrityRecognitionOutcomeCallable StartCelebrityRecognitionCallable(const StartCelebrityRecognitionRequestT& request) const
        {
            return SubmitCallable(&RekognitionClient::StartCelebrityRecognition, request);
        }

        /**
         * An Async wrapper for StartCelebrityRecognition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartCelebrityRecognitionRequestT = Model::StartCelebrityRecognitionRequest>
        void StartCelebrityRecognitionAsync(const StartCelebrityRecognitionRequestT& request, const StartCelebrityRecognitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RekognitionClient::StartCelebrityRecognition, request, handler, context);
        }

        /**
         * <p> Starts asynchronous detection of inappropriate, unwanted, or offensive
         * content in a stored video. For a list of moderation labels in Amazon
         * Rekognition, see <a
         * href="https://docs.aws.amazon.com/rekognition/latest/dg/moderation.html#moderation-api">Using
         * the image and video moderation APIs</a>.</p> <p>Amazon Rekognition Video can
         * moderate content in a video stored in an Amazon S3 bucket. Use <a>Video</a> to
         * specify the bucket name and the filename of the video.
         * <code>StartContentModeration</code> returns a job identifier
         * (<code>JobId</code>) which you use to get the results of the analysis. When
         * content analysis is finished, Amazon Rekognition Video publishes a completion
         * status to the Amazon Simple Notification Service topic that you specify in
         * <code>NotificationChannel</code>.</p> <p>To get the results of the content
         * analysis, first check that the status value published to the Amazon SNS topic is
         * <code>SUCCEEDED</code>. If so, call <a>GetContentModeration</a> and pass the job
         * identifier (<code>JobId</code>) from the initial call to
         * <code>StartContentModeration</code>. </p> <p>For more information, see
         * Moderating content in the Amazon Rekognition Developer Guide.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/StartContentModeration">AWS
         * API Reference</a></p>
         */
        virtual Model::StartContentModerationOutcome StartContentModeration(const Model::StartContentModerationRequest& request) const;

        /**
         * A Callable wrapper for StartContentModeration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartContentModerationRequestT = Model::StartContentModerationRequest>
        Model::StartContentModerationOutcomeCallable StartContentModerationCallable(const StartContentModerationRequestT& request) const
        {
            return SubmitCallable(&RekognitionClient::StartContentModeration, request);
        }

        /**
         * An Async wrapper for StartContentModeration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartContentModerationRequestT = Model::StartContentModerationRequest>
        void StartContentModerationAsync(const StartContentModerationRequestT& request, const StartContentModerationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RekognitionClient::StartContentModeration, request, handler, context);
        }

        /**
         * <p>Starts asynchronous detection of faces in a stored video.</p> <p>Amazon
         * Rekognition Video can detect faces in a video stored in an Amazon S3 bucket. Use
         * <a>Video</a> to specify the bucket name and the filename of the video.
         * <code>StartFaceDetection</code> returns a job identifier (<code>JobId</code>)
         * that you use to get the results of the operation. When face detection is
         * finished, Amazon Rekognition Video publishes a completion status to the Amazon
         * Simple Notification Service topic that you specify in
         * <code>NotificationChannel</code>. To get the results of the face detection
         * operation, first check that the status value published to the Amazon SNS topic
         * is <code>SUCCEEDED</code>. If so, call <a>GetFaceDetection</a> and pass the job
         * identifier (<code>JobId</code>) from the initial call to
         * <code>StartFaceDetection</code>.</p> <p>For more information, see Detecting
         * faces in a stored video in the Amazon Rekognition Developer Guide.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/StartFaceDetection">AWS
         * API Reference</a></p>
         */
        virtual Model::StartFaceDetectionOutcome StartFaceDetection(const Model::StartFaceDetectionRequest& request) const;

        /**
         * A Callable wrapper for StartFaceDetection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartFaceDetectionRequestT = Model::StartFaceDetectionRequest>
        Model::StartFaceDetectionOutcomeCallable StartFaceDetectionCallable(const StartFaceDetectionRequestT& request) const
        {
            return SubmitCallable(&RekognitionClient::StartFaceDetection, request);
        }

        /**
         * An Async wrapper for StartFaceDetection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartFaceDetectionRequestT = Model::StartFaceDetectionRequest>
        void StartFaceDetectionAsync(const StartFaceDetectionRequestT& request, const StartFaceDetectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RekognitionClient::StartFaceDetection, request, handler, context);
        }

        /**
         * <p>Starts the asynchronous search for faces in a collection that match the faces
         * of persons detected in a stored video.</p> <p>The video must be stored in an
         * Amazon S3 bucket. Use <a>Video</a> to specify the bucket name and the filename
         * of the video. <code>StartFaceSearch</code> returns a job identifier
         * (<code>JobId</code>) which you use to get the search results once the search has
         * completed. When searching is finished, Amazon Rekognition Video publishes a
         * completion status to the Amazon Simple Notification Service topic that you
         * specify in <code>NotificationChannel</code>. To get the search results, first
         * check that the status value published to the Amazon SNS topic is
         * <code>SUCCEEDED</code>. If so, call <a>GetFaceSearch</a> and pass the job
         * identifier (<code>JobId</code>) from the initial call to
         * <code>StartFaceSearch</code>. For more information, see <a
         * href="https://docs.aws.amazon.com/rekognition/latest/dg/procedure-person-search-videos.html">Searching
         * stored videos for faces</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/StartFaceSearch">AWS
         * API Reference</a></p>
         */
        virtual Model::StartFaceSearchOutcome StartFaceSearch(const Model::StartFaceSearchRequest& request) const;

        /**
         * A Callable wrapper for StartFaceSearch that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartFaceSearchRequestT = Model::StartFaceSearchRequest>
        Model::StartFaceSearchOutcomeCallable StartFaceSearchCallable(const StartFaceSearchRequestT& request) const
        {
            return SubmitCallable(&RekognitionClient::StartFaceSearch, request);
        }

        /**
         * An Async wrapper for StartFaceSearch that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartFaceSearchRequestT = Model::StartFaceSearchRequest>
        void StartFaceSearchAsync(const StartFaceSearchRequestT& request, const StartFaceSearchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RekognitionClient::StartFaceSearch, request, handler, context);
        }

        /**
         * <p>Starts asynchronous detection of labels in a stored video.</p> <p>Amazon
         * Rekognition Video can detect labels in a video. Labels are instances of
         * real-world entities. This includes objects like flower, tree, and table; events
         * like wedding, graduation, and birthday party; concepts like landscape, evening,
         * and nature; and activities like a person getting out of a car or a person
         * skiing.</p> <p>The video must be stored in an Amazon S3 bucket. Use <a>Video</a>
         * to specify the bucket name and the filename of the video.
         * <code>StartLabelDetection</code> returns a job identifier (<code>JobId</code>)
         * which you use to get the results of the operation. When label detection is
         * finished, Amazon Rekognition Video publishes a completion status to the Amazon
         * Simple Notification Service topic that you specify in
         * <code>NotificationChannel</code>.</p> <p>To get the results of the label
         * detection operation, first check that the status value published to the Amazon
         * SNS topic is <code>SUCCEEDED</code>. If so, call <a>GetLabelDetection</a> and
         * pass the job identifier (<code>JobId</code>) from the initial call to
         * <code>StartLabelDetection</code>.</p> <p> <i>Optional Parameters</i> </p> <p>
         * <code>StartLabelDetection</code> has the <code>GENERAL_LABELS</code> Feature
         * applied by default. This feature allows you to provide filtering criteria to the
         * <code>Settings</code> parameter. You can filter with sets of individual labels
         * or with label categories. You can specify inclusive filters, exclusive filters,
         * or a combination of inclusive and exclusive filters. For more information on
         * filtering, see <a
         * href="https://docs.aws.amazon.com/rekognition/latest/dg/labels-detecting-labels-video.html">Detecting
         * labels in a video</a>.</p> <p>You can specify <code>MinConfidence</code> to
         * control the confidence threshold for the labels returned. The default is
         * 50.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/StartLabelDetection">AWS
         * API Reference</a></p>
         */
        virtual Model::StartLabelDetectionOutcome StartLabelDetection(const Model::StartLabelDetectionRequest& request) const;

        /**
         * A Callable wrapper for StartLabelDetection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartLabelDetectionRequestT = Model::StartLabelDetectionRequest>
        Model::StartLabelDetectionOutcomeCallable StartLabelDetectionCallable(const StartLabelDetectionRequestT& request) const
        {
            return SubmitCallable(&RekognitionClient::StartLabelDetection, request);
        }

        /**
         * An Async wrapper for StartLabelDetection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartLabelDetectionRequestT = Model::StartLabelDetectionRequest>
        void StartLabelDetectionAsync(const StartLabelDetectionRequestT& request, const StartLabelDetectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RekognitionClient::StartLabelDetection, request, handler, context);
        }

        /**
         * <p>Initiates a new media analysis job. Accepts a manifest file in an Amazon S3
         * bucket. The output is a manifest file and a summary of the manifest stored in
         * the Amazon S3 bucket.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/StartMediaAnalysisJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartMediaAnalysisJobOutcome StartMediaAnalysisJob(const Model::StartMediaAnalysisJobRequest& request) const;

        /**
         * A Callable wrapper for StartMediaAnalysisJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartMediaAnalysisJobRequestT = Model::StartMediaAnalysisJobRequest>
        Model::StartMediaAnalysisJobOutcomeCallable StartMediaAnalysisJobCallable(const StartMediaAnalysisJobRequestT& request) const
        {
            return SubmitCallable(&RekognitionClient::StartMediaAnalysisJob, request);
        }

        /**
         * An Async wrapper for StartMediaAnalysisJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartMediaAnalysisJobRequestT = Model::StartMediaAnalysisJobRequest>
        void StartMediaAnalysisJobAsync(const StartMediaAnalysisJobRequestT& request, const StartMediaAnalysisJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RekognitionClient::StartMediaAnalysisJob, request, handler, context);
        }

        /**
         * <p>Starts the asynchronous tracking of a person's path in a stored video.</p>
         * <p>Amazon Rekognition Video can track the path of people in a video stored in an
         * Amazon S3 bucket. Use <a>Video</a> to specify the bucket name and the filename
         * of the video. <code>StartPersonTracking</code> returns a job identifier
         * (<code>JobId</code>) which you use to get the results of the operation. When
         * label detection is finished, Amazon Rekognition publishes a completion status to
         * the Amazon Simple Notification Service topic that you specify in
         * <code>NotificationChannel</code>. </p> <p>To get the results of the person
         * detection operation, first check that the status value published to the Amazon
         * SNS topic is <code>SUCCEEDED</code>. If so, call <a>GetPersonTracking</a> and
         * pass the job identifier (<code>JobId</code>) from the initial call to
         * <code>StartPersonTracking</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/StartPersonTracking">AWS
         * API Reference</a></p>
         */
        virtual Model::StartPersonTrackingOutcome StartPersonTracking(const Model::StartPersonTrackingRequest& request) const;

        /**
         * A Callable wrapper for StartPersonTracking that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartPersonTrackingRequestT = Model::StartPersonTrackingRequest>
        Model::StartPersonTrackingOutcomeCallable StartPersonTrackingCallable(const StartPersonTrackingRequestT& request) const
        {
            return SubmitCallable(&RekognitionClient::StartPersonTracking, request);
        }

        /**
         * An Async wrapper for StartPersonTracking that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartPersonTrackingRequestT = Model::StartPersonTrackingRequest>
        void StartPersonTrackingAsync(const StartPersonTrackingRequestT& request, const StartPersonTrackingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RekognitionClient::StartPersonTracking, request, handler, context);
        }

        /**
         *  <p>This operation applies only to Amazon Rekognition Custom Labels.</p>
         *  <p>Starts the running of the version of a model. Starting a model takes
         * a while to complete. To check the current state of the model, use
         * <a>DescribeProjectVersions</a>. </p> <p>Once the model is running, you can
         * detect custom labels in new images by calling <a>DetectCustomLabels</a>.</p>
         *  <p>You are charged for the amount of time that the model is running. To
         * stop a running model, call <a>StopProjectVersion</a>.</p>  <p>This
         * operation requires permissions to perform the
         * <code>rekognition:StartProjectVersion</code> action.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/StartProjectVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::StartProjectVersionOutcome StartProjectVersion(const Model::StartProjectVersionRequest& request) const;

        /**
         * A Callable wrapper for StartProjectVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartProjectVersionRequestT = Model::StartProjectVersionRequest>
        Model::StartProjectVersionOutcomeCallable StartProjectVersionCallable(const StartProjectVersionRequestT& request) const
        {
            return SubmitCallable(&RekognitionClient::StartProjectVersion, request);
        }

        /**
         * An Async wrapper for StartProjectVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartProjectVersionRequestT = Model::StartProjectVersionRequest>
        void StartProjectVersionAsync(const StartProjectVersionRequestT& request, const StartProjectVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RekognitionClient::StartProjectVersion, request, handler, context);
        }

        /**
         * <p>Starts asynchronous detection of segment detection in a stored video.</p>
         * <p>Amazon Rekognition Video can detect segments in a video stored in an Amazon
         * S3 bucket. Use <a>Video</a> to specify the bucket name and the filename of the
         * video. <code>StartSegmentDetection</code> returns a job identifier
         * (<code>JobId</code>) which you use to get the results of the operation. When
         * segment detection is finished, Amazon Rekognition Video publishes a completion
         * status to the Amazon Simple Notification Service topic that you specify in
         * <code>NotificationChannel</code>.</p> <p>You can use the <code>Filters</code>
         * (<a>StartSegmentDetectionFilters</a>) input parameter to specify the minimum
         * detection confidence returned in the response. Within <code>Filters</code>, use
         * <code>ShotFilter</code> (<a>StartShotDetectionFilter</a>) to filter detected
         * shots. Use <code>TechnicalCueFilter</code>
         * (<a>StartTechnicalCueDetectionFilter</a>) to filter technical cues. </p> <p>To
         * get the results of the segment detection operation, first check that the status
         * value published to the Amazon SNS topic is <code>SUCCEEDED</code>. if so, call
         * <a>GetSegmentDetection</a> and pass the job identifier (<code>JobId</code>) from
         * the initial call to <code>StartSegmentDetection</code>. </p> <p>For more
         * information, see Detecting video segments in stored video in the Amazon
         * Rekognition Developer Guide.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/StartSegmentDetection">AWS
         * API Reference</a></p>
         */
        virtual Model::StartSegmentDetectionOutcome StartSegmentDetection(const Model::StartSegmentDetectionRequest& request) const;

        /**
         * A Callable wrapper for StartSegmentDetection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartSegmentDetectionRequestT = Model::StartSegmentDetectionRequest>
        Model::StartSegmentDetectionOutcomeCallable StartSegmentDetectionCallable(const StartSegmentDetectionRequestT& request) const
        {
            return SubmitCallable(&RekognitionClient::StartSegmentDetection, request);
        }

        /**
         * An Async wrapper for StartSegmentDetection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartSegmentDetectionRequestT = Model::StartSegmentDetectionRequest>
        void StartSegmentDetectionAsync(const StartSegmentDetectionRequestT& request, const StartSegmentDetectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RekognitionClient::StartSegmentDetection, request, handler, context);
        }

        /**
         * <p>Starts processing a stream processor. You create a stream processor by
         * calling <a>CreateStreamProcessor</a>. To tell <code>StartStreamProcessor</code>
         * which stream processor to start, use the value of the <code>Name</code> field
         * specified in the call to <code>CreateStreamProcessor</code>.</p> <p>If you are
         * using a label detection stream processor to detect labels, you need to provide a
         * <code>Start selector</code> and a <code>Stop selector</code> to determine the
         * length of the stream processing time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/StartStreamProcessor">AWS
         * API Reference</a></p>
         */
        virtual Model::StartStreamProcessorOutcome StartStreamProcessor(const Model::StartStreamProcessorRequest& request) const;

        /**
         * A Callable wrapper for StartStreamProcessor that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartStreamProcessorRequestT = Model::StartStreamProcessorRequest>
        Model::StartStreamProcessorOutcomeCallable StartStreamProcessorCallable(const StartStreamProcessorRequestT& request) const
        {
            return SubmitCallable(&RekognitionClient::StartStreamProcessor, request);
        }

        /**
         * An Async wrapper for StartStreamProcessor that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartStreamProcessorRequestT = Model::StartStreamProcessorRequest>
        void StartStreamProcessorAsync(const StartStreamProcessorRequestT& request, const StartStreamProcessorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RekognitionClient::StartStreamProcessor, request, handler, context);
        }

        /**
         * <p>Starts asynchronous detection of text in a stored video.</p> <p>Amazon
         * Rekognition Video can detect text in a video stored in an Amazon S3 bucket. Use
         * <a>Video</a> to specify the bucket name and the filename of the video.
         * <code>StartTextDetection</code> returns a job identifier (<code>JobId</code>)
         * which you use to get the results of the operation. When text detection is
         * finished, Amazon Rekognition Video publishes a completion status to the Amazon
         * Simple Notification Service topic that you specify in
         * <code>NotificationChannel</code>.</p> <p>To get the results of the text
         * detection operation, first check that the status value published to the Amazon
         * SNS topic is <code>SUCCEEDED</code>. if so, call <a>GetTextDetection</a> and
         * pass the job identifier (<code>JobId</code>) from the initial call to
         * <code>StartTextDetection</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/StartTextDetection">AWS
         * API Reference</a></p>
         */
        virtual Model::StartTextDetectionOutcome StartTextDetection(const Model::StartTextDetectionRequest& request) const;

        /**
         * A Callable wrapper for StartTextDetection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartTextDetectionRequestT = Model::StartTextDetectionRequest>
        Model::StartTextDetectionOutcomeCallable StartTextDetectionCallable(const StartTextDetectionRequestT& request) const
        {
            return SubmitCallable(&RekognitionClient::StartTextDetection, request);
        }

        /**
         * An Async wrapper for StartTextDetection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartTextDetectionRequestT = Model::StartTextDetectionRequest>
        void StartTextDetectionAsync(const StartTextDetectionRequestT& request, const StartTextDetectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RekognitionClient::StartTextDetection, request, handler, context);
        }

        /**
         *  <p>This operation applies only to Amazon Rekognition Custom Labels.</p>
         *  <p>Stops a running model. The operation might take a while to complete.
         * To check the current status, call <a>DescribeProjectVersions</a>. Only applies
         * to Custom Labels projects.</p> <p>This operation requires permissions to perform
         * the <code>rekognition:StopProjectVersion</code> action.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/StopProjectVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::StopProjectVersionOutcome StopProjectVersion(const Model::StopProjectVersionRequest& request) const;

        /**
         * A Callable wrapper for StopProjectVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopProjectVersionRequestT = Model::StopProjectVersionRequest>
        Model::StopProjectVersionOutcomeCallable StopProjectVersionCallable(const StopProjectVersionRequestT& request) const
        {
            return SubmitCallable(&RekognitionClient::StopProjectVersion, request);
        }

        /**
         * An Async wrapper for StopProjectVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopProjectVersionRequestT = Model::StopProjectVersionRequest>
        void StopProjectVersionAsync(const StopProjectVersionRequestT& request, const StopProjectVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RekognitionClient::StopProjectVersion, request, handler, context);
        }

        /**
         * <p>Stops a running stream processor that was created by
         * <a>CreateStreamProcessor</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/StopStreamProcessor">AWS
         * API Reference</a></p>
         */
        virtual Model::StopStreamProcessorOutcome StopStreamProcessor(const Model::StopStreamProcessorRequest& request) const;

        /**
         * A Callable wrapper for StopStreamProcessor that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopStreamProcessorRequestT = Model::StopStreamProcessorRequest>
        Model::StopStreamProcessorOutcomeCallable StopStreamProcessorCallable(const StopStreamProcessorRequestT& request) const
        {
            return SubmitCallable(&RekognitionClient::StopStreamProcessor, request);
        }

        /**
         * An Async wrapper for StopStreamProcessor that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopStreamProcessorRequestT = Model::StopStreamProcessorRequest>
        void StopStreamProcessorAsync(const StopStreamProcessorRequestT& request, const StopStreamProcessorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RekognitionClient::StopStreamProcessor, request, handler, context);
        }

        /**
         * <p> Adds one or more key-value tags to an Amazon Rekognition collection, stream
         * processor, or Custom Labels model. For more information, see <a
         * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
         * AWS Resources</a>. </p> <p>This operation requires permissions to perform the
         * <code>rekognition:TagResource</code> action. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&RekognitionClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RekognitionClient::TagResource, request, handler, context);
        }

        /**
         * <p> Removes one or more tags from an Amazon Rekognition collection, stream
         * processor, or Custom Labels model. </p> <p>This operation requires permissions
         * to perform the <code>rekognition:UntagResource</code> action. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&RekognitionClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RekognitionClient::UntagResource, request, handler, context);
        }

        /**
         *  <p>This operation applies only to Amazon Rekognition Custom Labels.</p>
         *  <p>Adds or updates one or more entries (images) in a dataset. An entry
         * is a JSON Line which contains the information for a single image, including the
         * image location, assigned labels, and object location bounding boxes. For more
         * information, see Image-Level labels in manifest files and Object localization in
         * manifest files in the <i>Amazon Rekognition Custom Labels Developer Guide</i>.
         * </p> <p>If the <code>source-ref</code> field in the JSON line references an
         * existing image, the existing image in the dataset is updated. If
         * <code>source-ref</code> field doesn't reference an existing image, the image is
         * added as a new image to the dataset. </p> <p>You specify the changes that you
         * want to make in the <code>Changes</code> input parameter. There isn't a limit to
         * the number JSON Lines that you can change, but the size of <code>Changes</code>
         * must be less than 5MB.</p> <p> <code>UpdateDatasetEntries</code> returns
         * immediatly, but the dataset update might take a while to complete. Use
         * <a>DescribeDataset</a> to check the current status. The dataset updated
         * successfully if the value of <code>Status</code> is
         * <code>UPDATE_COMPLETE</code>. </p> <p>To check if any non-terminal errors
         * occured, call <a>ListDatasetEntries</a> and check for the presence of
         * <code>errors</code> lists in the JSON Lines.</p> <p>Dataset update fails if a
         * terminal error occurs (<code>Status</code> = <code>UPDATE_FAILED</code>).
         * Currently, you can't access the terminal error information from the Amazon
         * Rekognition Custom Labels SDK. </p> <p>This operation requires permissions to
         * perform the <code>rekognition:UpdateDatasetEntries</code> action.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/UpdateDatasetEntries">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDatasetEntriesOutcome UpdateDatasetEntries(const Model::UpdateDatasetEntriesRequest& request) const;

        /**
         * A Callable wrapper for UpdateDatasetEntries that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateDatasetEntriesRequestT = Model::UpdateDatasetEntriesRequest>
        Model::UpdateDatasetEntriesOutcomeCallable UpdateDatasetEntriesCallable(const UpdateDatasetEntriesRequestT& request) const
        {
            return SubmitCallable(&RekognitionClient::UpdateDatasetEntries, request);
        }

        /**
         * An Async wrapper for UpdateDatasetEntries that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateDatasetEntriesRequestT = Model::UpdateDatasetEntriesRequest>
        void UpdateDatasetEntriesAsync(const UpdateDatasetEntriesRequestT& request, const UpdateDatasetEntriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RekognitionClient::UpdateDatasetEntries, request, handler, context);
        }

        /**
         * <p> Allows you to update a stream processor. You can change some settings and
         * regions of interest and delete certain parameters. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/UpdateStreamProcessor">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateStreamProcessorOutcome UpdateStreamProcessor(const Model::UpdateStreamProcessorRequest& request) const;

        /**
         * A Callable wrapper for UpdateStreamProcessor that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateStreamProcessorRequestT = Model::UpdateStreamProcessorRequest>
        Model::UpdateStreamProcessorOutcomeCallable UpdateStreamProcessorCallable(const UpdateStreamProcessorRequestT& request) const
        {
            return SubmitCallable(&RekognitionClient::UpdateStreamProcessor, request);
        }

        /**
         * An Async wrapper for UpdateStreamProcessor that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateStreamProcessorRequestT = Model::UpdateStreamProcessorRequest>
        void UpdateStreamProcessorAsync(const UpdateStreamProcessorRequestT& request, const UpdateStreamProcessorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RekognitionClient::UpdateStreamProcessor, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<RekognitionEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<RekognitionClient>;
      void init(const RekognitionClientConfiguration& clientConfiguration);

      RekognitionClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<RekognitionEndpointProviderBase> m_endpointProvider;
  };

} // namespace Rekognition
} // namespace Aws
