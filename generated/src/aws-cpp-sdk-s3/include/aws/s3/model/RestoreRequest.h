/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/s3/model/GlacierJobParameters.h>
#include <aws/s3/model/RestoreRequestType.h>
#include <aws/s3/model/Tier.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3/model/SelectParameters.h>
#include <aws/s3/model/OutputLocation.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace S3
{
namespace Model
{

  /**
   * <p>Container for restore job parameters.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/RestoreRequest">AWS
   * API Reference</a></p>
   */
  class RestoreRequest
  {
  public:
    AWS_S3_API RestoreRequest() = default;
    AWS_S3_API RestoreRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3_API RestoreRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>Lifetime of the active copy in days. Do not use with restores that specify
     * <code>OutputLocation</code>.</p> <p>The Days element is required for regular
     * restores, and must not be provided for select requests.</p>
     */
    inline int GetDays() const { return m_days; }
    inline bool DaysHasBeenSet() const { return m_daysHasBeenSet; }
    inline void SetDays(int value) { m_daysHasBeenSet = true; m_days = value; }
    inline RestoreRequest& WithDays(int value) { SetDays(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>S3 Glacier related parameters pertaining to this job. Do not use with
     * restores that specify <code>OutputLocation</code>.</p>
     */
    inline const GlacierJobParameters& GetGlacierJobParameters() const { return m_glacierJobParameters; }
    inline bool GlacierJobParametersHasBeenSet() const { return m_glacierJobParametersHasBeenSet; }
    template<typename GlacierJobParametersT = GlacierJobParameters>
    void SetGlacierJobParameters(GlacierJobParametersT&& value) { m_glacierJobParametersHasBeenSet = true; m_glacierJobParameters = std::forward<GlacierJobParametersT>(value); }
    template<typename GlacierJobParametersT = GlacierJobParameters>
    RestoreRequest& WithGlacierJobParameters(GlacierJobParametersT&& value) { SetGlacierJobParameters(std::forward<GlacierJobParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     *  <p>Amazon S3 Select is no longer available to new customers.
     * Existing customers of Amazon S3 Select can continue to use the feature as usual.
     * <a
     * href="http://aws.amazon.com/blogs/storage/how-to-optimize-querying-your-data-in-amazon-s3/">Learn
     * more</a> </p>  <p>Type of restore request.</p>
     */
    inline RestoreRequestType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(RestoreRequestType value) { m_typeHasBeenSet = true; m_type = value; }
    inline RestoreRequest& WithType(RestoreRequestType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Retrieval tier at which the restore will be processed.</p>
     */
    inline Tier GetTier() const { return m_tier; }
    inline bool TierHasBeenSet() const { return m_tierHasBeenSet; }
    inline void SetTier(Tier value) { m_tierHasBeenSet = true; m_tier = value; }
    inline RestoreRequest& WithTier(Tier value) { SetTier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The optional description for the job.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    RestoreRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     *  <p>Amazon S3 Select is no longer available to new customers.
     * Existing customers of Amazon S3 Select can continue to use the feature as usual.
     * <a
     * href="http://aws.amazon.com/blogs/storage/how-to-optimize-querying-your-data-in-amazon-s3/">Learn
     * more</a> </p>  <p>Describes the parameters for Select job types.</p>
     */
    inline const SelectParameters& GetSelectParameters() const { return m_selectParameters; }
    inline bool SelectParametersHasBeenSet() const { return m_selectParametersHasBeenSet; }
    template<typename SelectParametersT = SelectParameters>
    void SetSelectParameters(SelectParametersT&& value) { m_selectParametersHasBeenSet = true; m_selectParameters = std::forward<SelectParametersT>(value); }
    template<typename SelectParametersT = SelectParameters>
    RestoreRequest& WithSelectParameters(SelectParametersT&& value) { SetSelectParameters(std::forward<SelectParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the location where the restore job's output is stored.</p>
     */
    inline const OutputLocation& GetOutputLocation() const { return m_outputLocation; }
    inline bool OutputLocationHasBeenSet() const { return m_outputLocationHasBeenSet; }
    template<typename OutputLocationT = OutputLocation>
    void SetOutputLocation(OutputLocationT&& value) { m_outputLocationHasBeenSet = true; m_outputLocation = std::forward<OutputLocationT>(value); }
    template<typename OutputLocationT = OutputLocation>
    RestoreRequest& WithOutputLocation(OutputLocationT&& value) { SetOutputLocation(std::forward<OutputLocationT>(value)); return *this;}
    ///@}
  private:

    int m_days{0};
    bool m_daysHasBeenSet = false;

    GlacierJobParameters m_glacierJobParameters;
    bool m_glacierJobParametersHasBeenSet = false;

    RestoreRequestType m_type{RestoreRequestType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Tier m_tier{Tier::NOT_SET};
    bool m_tierHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    SelectParameters m_selectParameters;
    bool m_selectParametersHasBeenSet = false;

    OutputLocation m_outputLocation;
    bool m_outputLocationHasBeenSet = false;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
