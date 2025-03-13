/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qapps/QApps_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qapps/model/CardType.h>
#include <aws/qapps/model/FormInputCardMetadata.h>
#include <aws/qapps/model/InputCardComputeMode.h>
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
namespace QApps
{
namespace Model
{

  /**
   * <p>Represents a form input card for an Amazon Q App.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qapps-2023-11-27/FormInputCardInput">AWS
   * API Reference</a></p>
   */
  class FormInputCardInput
  {
  public:
    AWS_QAPPS_API FormInputCardInput() = default;
    AWS_QAPPS_API FormInputCardInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_QAPPS_API FormInputCardInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QAPPS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The title or label of the form input card.</p>
     */
    inline const Aws::String& GetTitle() const { return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    template<typename TitleT = Aws::String>
    void SetTitle(TitleT&& value) { m_titleHasBeenSet = true; m_title = std::forward<TitleT>(value); }
    template<typename TitleT = Aws::String>
    FormInputCardInput& WithTitle(TitleT&& value) { SetTitle(std::forward<TitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the form input card.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    FormInputCardInput& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the card.</p>
     */
    inline CardType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(CardType value) { m_typeHasBeenSet = true; m_type = value; }
    inline FormInputCardInput& WithType(CardType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata that defines the form input card data.</p>
     */
    inline const FormInputCardMetadata& GetMetadata() const { return m_metadata; }
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
    template<typename MetadataT = FormInputCardMetadata>
    void SetMetadata(MetadataT&& value) { m_metadataHasBeenSet = true; m_metadata = std::forward<MetadataT>(value); }
    template<typename MetadataT = FormInputCardMetadata>
    FormInputCardInput& WithMetadata(MetadataT&& value) { SetMetadata(std::forward<MetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The compute mode of the form input card. This property determines whether
     * individual participants of a data collection session can submit multiple
     * response or one response. A compute mode of <code>append</code> shall allow
     * participants to submit the same form multiple times with different values. A
     * compute mode of <code>replace</code>code&gt; shall overwrite the current value
     * for each participant.</p>
     */
    inline InputCardComputeMode GetComputeMode() const { return m_computeMode; }
    inline bool ComputeModeHasBeenSet() const { return m_computeModeHasBeenSet; }
    inline void SetComputeMode(InputCardComputeMode value) { m_computeModeHasBeenSet = true; m_computeMode = value; }
    inline FormInputCardInput& WithComputeMode(InputCardComputeMode value) { SetComputeMode(value); return *this;}
    ///@}
  private:

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    CardType m_type{CardType::NOT_SET};
    bool m_typeHasBeenSet = false;

    FormInputCardMetadata m_metadata;
    bool m_metadataHasBeenSet = false;

    InputCardComputeMode m_computeMode{InputCardComputeMode::NOT_SET};
    bool m_computeModeHasBeenSet = false;
  };

} // namespace Model
} // namespace QApps
} // namespace Aws
