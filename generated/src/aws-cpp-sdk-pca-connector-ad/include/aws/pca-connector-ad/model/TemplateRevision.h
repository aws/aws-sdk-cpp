﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pca-connector-ad/PcaConnectorAd_EXPORTS.h>

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
namespace PcaConnectorAd
{
namespace Model
{

  /**
   * <p>The revision version of the template. Template updates will increment the
   * minor revision. Re-enrolling all certificate holders will increment the major
   * revision.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pca-connector-ad-2018-05-10/TemplateRevision">AWS
   * API Reference</a></p>
   */
  class TemplateRevision
  {
  public:
    AWS_PCACONNECTORAD_API TemplateRevision() = default;
    AWS_PCACONNECTORAD_API TemplateRevision(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCACONNECTORAD_API TemplateRevision& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCACONNECTORAD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The revision version of the template. Re-enrolling all certificate holders
     * will increment the major revision.</p>
     */
    inline int GetMajorRevision() const { return m_majorRevision; }
    inline bool MajorRevisionHasBeenSet() const { return m_majorRevisionHasBeenSet; }
    inline void SetMajorRevision(int value) { m_majorRevisionHasBeenSet = true; m_majorRevision = value; }
    inline TemplateRevision& WithMajorRevision(int value) { SetMajorRevision(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The revision version of the template. Re-enrolling all certificate holders
     * will increment the major revision.</p>
     */
    inline int GetMinorRevision() const { return m_minorRevision; }
    inline bool MinorRevisionHasBeenSet() const { return m_minorRevisionHasBeenSet; }
    inline void SetMinorRevision(int value) { m_minorRevisionHasBeenSet = true; m_minorRevision = value; }
    inline TemplateRevision& WithMinorRevision(int value) { SetMinorRevision(value); return *this;}
    ///@}
  private:

    int m_majorRevision{0};
    bool m_majorRevisionHasBeenSet = false;

    int m_minorRevision{0};
    bool m_minorRevisionHasBeenSet = false;
  };

} // namespace Model
} // namespace PcaConnectorAd
} // namespace Aws
