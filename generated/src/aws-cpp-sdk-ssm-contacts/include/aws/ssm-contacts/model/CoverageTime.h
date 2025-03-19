/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-contacts/SSMContacts_EXPORTS.h>
#include <aws/ssm-contacts/model/HandOffTime.h>
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
namespace SSMContacts
{
namespace Model
{

  /**
   * <p>Information about when an on-call shift begins and ends.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/CoverageTime">AWS
   * API Reference</a></p>
   */
  class CoverageTime
  {
  public:
    AWS_SSMCONTACTS_API CoverageTime() = default;
    AWS_SSMCONTACTS_API CoverageTime(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMCONTACTS_API CoverageTime& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMCONTACTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Information about when the on-call rotation shift begins.</p>
     */
    inline const HandOffTime& GetStart() const { return m_start; }
    inline bool StartHasBeenSet() const { return m_startHasBeenSet; }
    template<typename StartT = HandOffTime>
    void SetStart(StartT&& value) { m_startHasBeenSet = true; m_start = std::forward<StartT>(value); }
    template<typename StartT = HandOffTime>
    CoverageTime& WithStart(StartT&& value) { SetStart(std::forward<StartT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about when the on-call rotation shift ends.</p>
     */
    inline const HandOffTime& GetEnd() const { return m_end; }
    inline bool EndHasBeenSet() const { return m_endHasBeenSet; }
    template<typename EndT = HandOffTime>
    void SetEnd(EndT&& value) { m_endHasBeenSet = true; m_end = std::forward<EndT>(value); }
    template<typename EndT = HandOffTime>
    CoverageTime& WithEnd(EndT&& value) { SetEnd(std::forward<EndT>(value)); return *this;}
    ///@}
  private:

    HandOffTime m_start;
    bool m_startHasBeenSet = false;

    HandOffTime m_end;
    bool m_endHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
