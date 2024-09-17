/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>

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
   * <p>The number of managed nodes found for each patch severity level defined in
   * the request filter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/SeveritySummary">AWS
   * API Reference</a></p>
   */
  class SeveritySummary
  {
  public:
    AWS_SSM_API SeveritySummary();
    AWS_SSM_API SeveritySummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API SeveritySummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The total number of resources or compliance items that have a severity level
     * of <code>Critical</code>. Critical severity is determined by the organization
     * that published the compliance items.</p>
     */
    inline int GetCriticalCount() const{ return m_criticalCount; }
    inline bool CriticalCountHasBeenSet() const { return m_criticalCountHasBeenSet; }
    inline void SetCriticalCount(int value) { m_criticalCountHasBeenSet = true; m_criticalCount = value; }
    inline SeveritySummary& WithCriticalCount(int value) { SetCriticalCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of resources or compliance items that have a severity level
     * of high. High severity is determined by the organization that published the
     * compliance items.</p>
     */
    inline int GetHighCount() const{ return m_highCount; }
    inline bool HighCountHasBeenSet() const { return m_highCountHasBeenSet; }
    inline void SetHighCount(int value) { m_highCountHasBeenSet = true; m_highCount = value; }
    inline SeveritySummary& WithHighCount(int value) { SetHighCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of resources or compliance items that have a severity level
     * of medium. Medium severity is determined by the organization that published the
     * compliance items.</p>
     */
    inline int GetMediumCount() const{ return m_mediumCount; }
    inline bool MediumCountHasBeenSet() const { return m_mediumCountHasBeenSet; }
    inline void SetMediumCount(int value) { m_mediumCountHasBeenSet = true; m_mediumCount = value; }
    inline SeveritySummary& WithMediumCount(int value) { SetMediumCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of resources or compliance items that have a severity level
     * of low. Low severity is determined by the organization that published the
     * compliance items.</p>
     */
    inline int GetLowCount() const{ return m_lowCount; }
    inline bool LowCountHasBeenSet() const { return m_lowCountHasBeenSet; }
    inline void SetLowCount(int value) { m_lowCountHasBeenSet = true; m_lowCount = value; }
    inline SeveritySummary& WithLowCount(int value) { SetLowCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of resources or compliance items that have a severity level
     * of informational. Informational severity is determined by the organization that
     * published the compliance items.</p>
     */
    inline int GetInformationalCount() const{ return m_informationalCount; }
    inline bool InformationalCountHasBeenSet() const { return m_informationalCountHasBeenSet; }
    inline void SetInformationalCount(int value) { m_informationalCountHasBeenSet = true; m_informationalCount = value; }
    inline SeveritySummary& WithInformationalCount(int value) { SetInformationalCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of resources or compliance items that have a severity level
     * of unspecified. Unspecified severity is determined by the organization that
     * published the compliance items.</p>
     */
    inline int GetUnspecifiedCount() const{ return m_unspecifiedCount; }
    inline bool UnspecifiedCountHasBeenSet() const { return m_unspecifiedCountHasBeenSet; }
    inline void SetUnspecifiedCount(int value) { m_unspecifiedCountHasBeenSet = true; m_unspecifiedCount = value; }
    inline SeveritySummary& WithUnspecifiedCount(int value) { SetUnspecifiedCount(value); return *this;}
    ///@}
  private:

    int m_criticalCount;
    bool m_criticalCountHasBeenSet = false;

    int m_highCount;
    bool m_highCountHasBeenSet = false;

    int m_mediumCount;
    bool m_mediumCountHasBeenSet = false;

    int m_lowCount;
    bool m_lowCountHasBeenSet = false;

    int m_informationalCount;
    bool m_informationalCountHasBeenSet = false;

    int m_unspecifiedCount;
    bool m_unspecifiedCountHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
