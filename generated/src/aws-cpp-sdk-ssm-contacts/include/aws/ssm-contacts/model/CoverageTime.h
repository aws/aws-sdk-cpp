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
    AWS_SSMCONTACTS_API CoverageTime();
    AWS_SSMCONTACTS_API CoverageTime(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMCONTACTS_API CoverageTime& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMCONTACTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Information about when the on-call rotation shift begins.</p>
     */
    inline const HandOffTime& GetStart() const{ return m_start; }

    /**
     * <p>Information about when the on-call rotation shift begins.</p>
     */
    inline bool StartHasBeenSet() const { return m_startHasBeenSet; }

    /**
     * <p>Information about when the on-call rotation shift begins.</p>
     */
    inline void SetStart(const HandOffTime& value) { m_startHasBeenSet = true; m_start = value; }

    /**
     * <p>Information about when the on-call rotation shift begins.</p>
     */
    inline void SetStart(HandOffTime&& value) { m_startHasBeenSet = true; m_start = std::move(value); }

    /**
     * <p>Information about when the on-call rotation shift begins.</p>
     */
    inline CoverageTime& WithStart(const HandOffTime& value) { SetStart(value); return *this;}

    /**
     * <p>Information about when the on-call rotation shift begins.</p>
     */
    inline CoverageTime& WithStart(HandOffTime&& value) { SetStart(std::move(value)); return *this;}


    /**
     * <p>Information about when the on-call rotation shift ends.</p>
     */
    inline const HandOffTime& GetEnd() const{ return m_end; }

    /**
     * <p>Information about when the on-call rotation shift ends.</p>
     */
    inline bool EndHasBeenSet() const { return m_endHasBeenSet; }

    /**
     * <p>Information about when the on-call rotation shift ends.</p>
     */
    inline void SetEnd(const HandOffTime& value) { m_endHasBeenSet = true; m_end = value; }

    /**
     * <p>Information about when the on-call rotation shift ends.</p>
     */
    inline void SetEnd(HandOffTime&& value) { m_endHasBeenSet = true; m_end = std::move(value); }

    /**
     * <p>Information about when the on-call rotation shift ends.</p>
     */
    inline CoverageTime& WithEnd(const HandOffTime& value) { SetEnd(value); return *this;}

    /**
     * <p>Information about when the on-call rotation shift ends.</p>
     */
    inline CoverageTime& WithEnd(HandOffTime&& value) { SetEnd(std::move(value)); return *this;}

  private:

    HandOffTime m_start;
    bool m_startHasBeenSet = false;

    HandOffTime m_end;
    bool m_endHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
