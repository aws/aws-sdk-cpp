/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/ProspectingResultAws.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace PartnerCentralSelling {
namespace Model {

/**
 * <p>Contains the results of an autonomous prospecting job. This includes data and
 * insights that AWS provides about a prospected customer account.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/ProspectingResult">AWS
 * API Reference</a></p>
 */
class ProspectingResult {
 public:
  AWS_PARTNERCENTRALSELLING_API ProspectingResult() = default;
  AWS_PARTNERCENTRALSELLING_API ProspectingResult(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API ProspectingResult& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Prospecting data and insights that AWS provides during the prospecting job.
   * This includes customer details, task information, and scoring that AI
   * generates.</p>
   */
  inline const ProspectingResultAws& GetAws() const { return m_aws; }
  inline bool AwsHasBeenSet() const { return m_awsHasBeenSet; }
  template <typename AwsT = ProspectingResultAws>
  void SetAws(AwsT&& value) {
    m_awsHasBeenSet = true;
    m_aws = std::forward<AwsT>(value);
  }
  template <typename AwsT = ProspectingResultAws>
  ProspectingResult& WithAws(AwsT&& value) {
    SetAws(std::forward<AwsT>(value));
    return *this;
  }
  ///@}
 private:
  ProspectingResultAws m_aws;
  bool m_awsHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
