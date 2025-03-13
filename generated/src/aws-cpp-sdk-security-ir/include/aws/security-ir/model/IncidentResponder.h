/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/security-ir/SecurityIR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SecurityIR
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/security-ir-2018-05-10/IncidentResponder">AWS
   * API Reference</a></p>
   */
  class IncidentResponder
  {
  public:
    AWS_SECURITYIR_API IncidentResponder() = default;
    AWS_SECURITYIR_API IncidentResponder(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYIR_API IncidentResponder& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYIR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    IncidentResponder& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetJobTitle() const { return m_jobTitle; }
    inline bool JobTitleHasBeenSet() const { return m_jobTitleHasBeenSet; }
    template<typename JobTitleT = Aws::String>
    void SetJobTitle(JobTitleT&& value) { m_jobTitleHasBeenSet = true; m_jobTitle = std::forward<JobTitleT>(value); }
    template<typename JobTitleT = Aws::String>
    IncidentResponder& WithJobTitle(JobTitleT&& value) { SetJobTitle(std::forward<JobTitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetEmail() const { return m_email; }
    inline bool EmailHasBeenSet() const { return m_emailHasBeenSet; }
    template<typename EmailT = Aws::String>
    void SetEmail(EmailT&& value) { m_emailHasBeenSet = true; m_email = std::forward<EmailT>(value); }
    template<typename EmailT = Aws::String>
    IncidentResponder& WithEmail(EmailT&& value) { SetEmail(std::forward<EmailT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_jobTitle;
    bool m_jobTitleHasBeenSet = false;

    Aws::String m_email;
    bool m_emailHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityIR
} // namespace Aws
