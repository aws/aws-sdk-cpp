/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/workspaces-web/model/Category.h>

using namespace Aws::Utils;

namespace Aws {
namespace WorkSpacesWeb {
namespace Model {
namespace CategoryMapper {

static const int Cults_HASH = HashingUtils::HashString("Cults");
static const int Gambling_HASH = HashingUtils::HashString("Gambling");
static const int Nudity_HASH = HashingUtils::HashString("Nudity");
static const int Pornography_HASH = HashingUtils::HashString("Pornography");
static const int SexEducation_HASH = HashingUtils::HashString("SexEducation");
static const int Tasteless_HASH = HashingUtils::HashString("Tasteless");
static const int Violence_HASH = HashingUtils::HashString("Violence");
static const int DownloadSites_HASH = HashingUtils::HashString("DownloadSites");
static const int ImageSharing_HASH = HashingUtils::HashString("ImageSharing");
static const int PeerToPeer_HASH = HashingUtils::HashString("PeerToPeer");
static const int StreamingMediaAndDownloads_HASH = HashingUtils::HashString("StreamingMediaAndDownloads");
static const int GenerativeAI_HASH = HashingUtils::HashString("GenerativeAI");
static const int CriminalActivity_HASH = HashingUtils::HashString("CriminalActivity");
static const int Hacking_HASH = HashingUtils::HashString("Hacking");
static const int HateAndIntolerance_HASH = HashingUtils::HashString("HateAndIntolerance");
static const int IllegalDrug_HASH = HashingUtils::HashString("IllegalDrug");
static const int IllegalSoftware_HASH = HashingUtils::HashString("IllegalSoftware");
static const int SchoolCheating_HASH = HashingUtils::HashString("SchoolCheating");
static const int SelfHarm_HASH = HashingUtils::HashString("SelfHarm");
static const int Weapons_HASH = HashingUtils::HashString("Weapons");
static const int Chat_HASH = HashingUtils::HashString("Chat");
static const int Games_HASH = HashingUtils::HashString("Games");
static const int InstantMessaging_HASH = HashingUtils::HashString("InstantMessaging");
static const int ProfessionalNetwork_HASH = HashingUtils::HashString("ProfessionalNetwork");
static const int SocialNetworking_HASH = HashingUtils::HashString("SocialNetworking");
static const int WebBasedEmail_HASH = HashingUtils::HashString("WebBasedEmail");
static const int ParkedDomains_HASH = HashingUtils::HashString("ParkedDomains");

Category GetCategoryForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Cults_HASH) {
    return Category::Cults;
  } else if (hashCode == Gambling_HASH) {
    return Category::Gambling;
  } else if (hashCode == Nudity_HASH) {
    return Category::Nudity;
  } else if (hashCode == Pornography_HASH) {
    return Category::Pornography;
  } else if (hashCode == SexEducation_HASH) {
    return Category::SexEducation;
  } else if (hashCode == Tasteless_HASH) {
    return Category::Tasteless;
  } else if (hashCode == Violence_HASH) {
    return Category::Violence;
  } else if (hashCode == DownloadSites_HASH) {
    return Category::DownloadSites;
  } else if (hashCode == ImageSharing_HASH) {
    return Category::ImageSharing;
  } else if (hashCode == PeerToPeer_HASH) {
    return Category::PeerToPeer;
  } else if (hashCode == StreamingMediaAndDownloads_HASH) {
    return Category::StreamingMediaAndDownloads;
  } else if (hashCode == GenerativeAI_HASH) {
    return Category::GenerativeAI;
  } else if (hashCode == CriminalActivity_HASH) {
    return Category::CriminalActivity;
  } else if (hashCode == Hacking_HASH) {
    return Category::Hacking;
  } else if (hashCode == HateAndIntolerance_HASH) {
    return Category::HateAndIntolerance;
  } else if (hashCode == IllegalDrug_HASH) {
    return Category::IllegalDrug;
  } else if (hashCode == IllegalSoftware_HASH) {
    return Category::IllegalSoftware;
  } else if (hashCode == SchoolCheating_HASH) {
    return Category::SchoolCheating;
  } else if (hashCode == SelfHarm_HASH) {
    return Category::SelfHarm;
  } else if (hashCode == Weapons_HASH) {
    return Category::Weapons;
  } else if (hashCode == Chat_HASH) {
    return Category::Chat;
  } else if (hashCode == Games_HASH) {
    return Category::Games;
  } else if (hashCode == InstantMessaging_HASH) {
    return Category::InstantMessaging;
  } else if (hashCode == ProfessionalNetwork_HASH) {
    return Category::ProfessionalNetwork;
  } else if (hashCode == SocialNetworking_HASH) {
    return Category::SocialNetworking;
  } else if (hashCode == WebBasedEmail_HASH) {
    return Category::WebBasedEmail;
  } else if (hashCode == ParkedDomains_HASH) {
    return Category::ParkedDomains;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<Category>(hashCode);
  }

  return Category::NOT_SET;
}

Aws::String GetNameForCategory(Category enumValue) {
  switch (enumValue) {
    case Category::NOT_SET:
      return {};
    case Category::Cults:
      return "Cults";
    case Category::Gambling:
      return "Gambling";
    case Category::Nudity:
      return "Nudity";
    case Category::Pornography:
      return "Pornography";
    case Category::SexEducation:
      return "SexEducation";
    case Category::Tasteless:
      return "Tasteless";
    case Category::Violence:
      return "Violence";
    case Category::DownloadSites:
      return "DownloadSites";
    case Category::ImageSharing:
      return "ImageSharing";
    case Category::PeerToPeer:
      return "PeerToPeer";
    case Category::StreamingMediaAndDownloads:
      return "StreamingMediaAndDownloads";
    case Category::GenerativeAI:
      return "GenerativeAI";
    case Category::CriminalActivity:
      return "CriminalActivity";
    case Category::Hacking:
      return "Hacking";
    case Category::HateAndIntolerance:
      return "HateAndIntolerance";
    case Category::IllegalDrug:
      return "IllegalDrug";
    case Category::IllegalSoftware:
      return "IllegalSoftware";
    case Category::SchoolCheating:
      return "SchoolCheating";
    case Category::SelfHarm:
      return "SelfHarm";
    case Category::Weapons:
      return "Weapons";
    case Category::Chat:
      return "Chat";
    case Category::Games:
      return "Games";
    case Category::InstantMessaging:
      return "InstantMessaging";
    case Category::ProfessionalNetwork:
      return "ProfessionalNetwork";
    case Category::SocialNetworking:
      return "SocialNetworking";
    case Category::WebBasedEmail:
      return "WebBasedEmail";
    case Category::ParkedDomains:
      return "ParkedDomains";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CategoryMapper
}  // namespace Model
}  // namespace WorkSpacesWeb
}  // namespace Aws
