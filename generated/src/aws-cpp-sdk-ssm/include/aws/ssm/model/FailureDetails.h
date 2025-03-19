/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SSM
{
namespace Model
{

  /**
   * <p>Information about an Automation failure.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/FailureDetails">AWS
   * API Reference</a></p>
   */
  class FailureDetails
  {
  public:
    AWS_SSM_API FailureDetails() = default;
    AWS_SSM_API FailureDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API FailureDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The stage of the Automation execution when the failure occurred. The stages
     * include the following: InputValidation, PreVerification, Invocation,
     * PostVerification.</p>
     */
    inline const Aws::String& GetFailureStage() const { return m_failureStage; }
    inline bool FailureStageHasBeenSet() const { return m_failureStageHasBeenSet; }
    template<typename FailureStageT = Aws::String>
    void SetFailureStage(FailureStageT&& value) { m_failureStageHasBeenSet = true; m_failureStage = std::forward<FailureStageT>(value); }
    template<typename FailureStageT = Aws::String>
    FailureDetails& WithFailureStage(FailureStageT&& value) { SetFailureStage(std::forward<FailureStageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of Automation failure. Failure types include the following: Action,
     * Permission, Throttling, Verification, Internal.</p>
     */
    inline const Aws::String& GetFailureType() const { return m_failureType; }
    inline bool FailureTypeHasBeenSet() const { return m_failureTypeHasBeenSet; }
    template<typename FailureTypeT = Aws::String>
    void SetFailureType(FailureTypeT&& value) { m_failureTypeHasBeenSet = true; m_failureType = std::forward<FailureTypeT>(value); }
    template<typename FailureTypeT = Aws::String>
    FailureDetails& WithFailureType(FailureTypeT&& value) { SetFailureType(std::forward<FailureTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Detailed information about the Automation step failure.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetDetails() const { return m_details; }
    inline bool DetailsHasBeenSet() const { return m_detailsHasBeenSet; }
    template<typename DetailsT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    void SetDetails(DetailsT&& value) { m_detailsHasBeenSet = true; m_details = std::forward<DetailsT>(value); }
    template<typename DetailsT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    FailureDetails& WithDetails(DetailsT&& value) { SetDetails(std::forward<DetailsT>(value)); return *this;}
    template<typename DetailsKeyT = Aws::String, typename DetailsValueT = Aws::Vector<Aws::String>>
    FailureDetails& AddDetails(DetailsKeyT&& key, DetailsValueT&& value) {
      m_detailsHasBeenSet = true; m_details.emplace(std::forward<DetailsKeyT>(key), std::forward<DetailsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_failureStage;
    bool m_failureStageHasBeenSet = false;

    Aws::String m_failureType;
    bool m_failureTypeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_details;
    bool m_detailsHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
