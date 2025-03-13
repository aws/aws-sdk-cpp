/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/RekognitionRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rekognition/model/CustomizationFeature.h>
#include <utility>

namespace Aws
{
namespace Rekognition
{
namespace Model
{

  /**
   */
  class DescribeProjectsRequest : public RekognitionRequest
  {
  public:
    AWS_REKOGNITION_API DescribeProjectsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeProjects"; }

    AWS_REKOGNITION_API Aws::String SerializePayload() const override;

    AWS_REKOGNITION_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>If the previous response was incomplete (because there is more results to
     * retrieve), Rekognition returns a pagination token in the response. You can use
     * this pagination token to retrieve the next set of results. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeProjectsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return per paginated call. The largest value
     * you can specify is 100. If you specify a value greater than 100, a
     * ValidationException error occurs. The default value is 100. </p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeProjectsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the projects that you want Rekognition to describe. If you don't
     * specify a value, the response includes descriptions for all the projects in your
     * AWS account.</p>
     */
    inline const Aws::Vector<Aws::String>& GetProjectNames() const { return m_projectNames; }
    inline bool ProjectNamesHasBeenSet() const { return m_projectNamesHasBeenSet; }
    template<typename ProjectNamesT = Aws::Vector<Aws::String>>
    void SetProjectNames(ProjectNamesT&& value) { m_projectNamesHasBeenSet = true; m_projectNames = std::forward<ProjectNamesT>(value); }
    template<typename ProjectNamesT = Aws::Vector<Aws::String>>
    DescribeProjectsRequest& WithProjectNames(ProjectNamesT&& value) { SetProjectNames(std::forward<ProjectNamesT>(value)); return *this;}
    template<typename ProjectNamesT = Aws::String>
    DescribeProjectsRequest& AddProjectNames(ProjectNamesT&& value) { m_projectNamesHasBeenSet = true; m_projectNames.emplace_back(std::forward<ProjectNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the type of customization to filter projects by. If no value is
     * specified, CUSTOM_LABELS is used as a default.</p>
     */
    inline const Aws::Vector<CustomizationFeature>& GetFeatures() const { return m_features; }
    inline bool FeaturesHasBeenSet() const { return m_featuresHasBeenSet; }
    template<typename FeaturesT = Aws::Vector<CustomizationFeature>>
    void SetFeatures(FeaturesT&& value) { m_featuresHasBeenSet = true; m_features = std::forward<FeaturesT>(value); }
    template<typename FeaturesT = Aws::Vector<CustomizationFeature>>
    DescribeProjectsRequest& WithFeatures(FeaturesT&& value) { SetFeatures(std::forward<FeaturesT>(value)); return *this;}
    inline DescribeProjectsRequest& AddFeatures(CustomizationFeature value) { m_featuresHasBeenSet = true; m_features.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::Vector<Aws::String> m_projectNames;
    bool m_projectNamesHasBeenSet = false;

    Aws::Vector<CustomizationFeature> m_features;
    bool m_featuresHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
